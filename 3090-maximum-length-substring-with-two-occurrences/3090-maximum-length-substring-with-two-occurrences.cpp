class Solution {
public:
    int freqCounter(string curr){
      
        int freq[26] = {0};
        for(char x : curr){
            freq[x - 'a']++;
            if(freq[x - 'a'] > 2){
                return 0;
            }
        }
        return curr.size();
    }
    int maximumLengthSubstring(string s) {
         string temp = s;
        reverse(s.begin() ,s.end());
        int maxlen = 2;
        for(int i = 0; i <s.size(); i++){
           for(int len = 1 ; len <= s.size() - i ; len ++){
            string cur = s.substr(i ,len);
            //string back = temp.substr(0 ,i);
           // cout << back << "\n";
            maxlen = max(maxlen , freqCounter(cur));
           // maxlen = max(maxlen , freqCounter(back));
           }
        }
        return maxlen;
    }
};