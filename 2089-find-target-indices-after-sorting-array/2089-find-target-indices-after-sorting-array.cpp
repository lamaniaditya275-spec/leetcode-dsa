class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v = {};
        sort(nums.begin(), nums.end());
        for(int x = 0; x < nums.size(); x ++)if(nums[x] == target)v.push_back(x);
        return v;
    }
};