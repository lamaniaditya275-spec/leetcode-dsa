class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0)return -1;

         vector<int> prefixmin(n);
         prefixmin[n-1] = nums[n-1];
         for(int i = n -2 ; i>= 0 ; i--){
            prefixmin[i] = min(prefixmin[i + 1] ,nums[i]);
         }


        int maxi = nums[0];
        for(int j= 0; j<n; j++){

            if(maxi < nums[j]) maxi = nums[j];
           
            if( (maxi - prefixmin[j]) <= k)return j;
        }
    return -1;
    }

};