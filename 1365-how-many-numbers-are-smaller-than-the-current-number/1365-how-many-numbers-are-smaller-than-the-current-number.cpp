class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& n) {
        vector<int> ans;

        for(int i = 0; i< n.size() ;i++){
            int cou = 0;
            for(int j = 0 ;j< n.size() ; j++){
               if(n[i] > n[j]){
                cou ++;
               }
            }
            ans.push_back(cou);
        }
        return ans;
    }
};