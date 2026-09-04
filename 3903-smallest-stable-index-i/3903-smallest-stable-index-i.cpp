class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n =nums.size();
        if(nums.size())
        for (int i = 0; i < n; i++) {
            int maxval = *max_element(nums.begin(), nums.end()-(nums.size()- i));
            int minval = *min_element(nums.begin() + i , nums.end());

            if( (maxval - minval)  <= k)return i;
        }
        return -1;
    }
};