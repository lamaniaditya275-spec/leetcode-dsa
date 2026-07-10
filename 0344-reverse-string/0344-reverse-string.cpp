class Solution {
public:
    void reverseString(vector<char>& s) {
       // reverse(s.begin(),s.end());
       int n = s.size() - 1;
       for(int i = 0 ; i < s.size() ; i++){
           if(i < n){
            swap(s[i] ,s[n]);
            n--;
           }
       }
    }
};