class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
       stack<int> s;
       vector<string> v;
       int j = 0 , cou = 0; 
       int ls = t[t.size() - 1];
       for(int i = 1 ; i<= n ; i++){
        if(i > ls)return v;
         v.push_back("Push");
         if(t.end() == find(t.begin(), t.end(), i) )v.push_back("Pop"); 
         j++;
         cou++;       
       } 
       return v;
    }
};