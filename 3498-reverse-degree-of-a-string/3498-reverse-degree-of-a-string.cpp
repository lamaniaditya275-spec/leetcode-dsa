class Solution {
public:
    int reverseDegree(string s) {
        int total = 0 , cou = 1;

        for(auto x : s){
           int cur = 26 - (x - 'a');
           total += (cur * cou);
           cou++;
        }
        return total;
    }
};