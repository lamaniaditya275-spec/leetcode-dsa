class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v;
        unordered_map<string , int> freq ;

       

        istringstream ss1(s1);
        istringstream ss2(s2);
        string word;

        while(ss1 >> word){
            freq[word]++;
        }
        while(ss2 >> word){
            freq[word]++;
        }

        for(auto c : freq){
            if(c.second == 1){
               v.push_back(c.first);
            }
        }

        return v;
    }
};