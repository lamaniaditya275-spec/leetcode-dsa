class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int st = nums.size() -1;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (i < st) {
        //         if (nums[st] == nums[i])
        //             return true;
        //     }
        //     st--;
        // }
        // return false;

        unordered_map<int , int> freq ;

        for (int x : nums) {
            freq[x]++;
            if (freq[x] >= 2) {

                return true;
            }
        }
        return false;
    }
};