class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max = 0;
        unordered_map<int , int> mp;
        for(auto x : nums)mp[x]++;

        for(auto v: mp){
            if(v.second > (nums.size() / 2)){
                 max = v.first;
            }
        }
        return max;
    }
};