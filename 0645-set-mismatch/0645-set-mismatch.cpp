class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin(), nums.end());
        vector<int > v;

       for(int i = 1 ; i<n ; i++){
        if(nums[i] == nums[i-1]){
            v.push_back(nums[i]);
        }
       }
       int maxi = *max_element(nums.begin(), nums.end());
       for(int i =1 ; i<=maxi ; i++){
        int cou = count(nums.begin(), nums.end(), i);
        if(cou < 1){
            v.push_back(i);
        }
       }
        if(v.size() == 1)v.push_back(maxi + 1);

       return v;
       
    }
};