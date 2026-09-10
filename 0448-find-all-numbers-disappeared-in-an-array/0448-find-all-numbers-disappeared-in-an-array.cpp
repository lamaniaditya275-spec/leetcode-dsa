class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int , int > mp;
        vector<int> ans;
        int maxi = nums.size();
        for(auto c : nums)mp[c++];

        for(int i = 1 ; i<=maxi ; i++){
            
            if(mp.find(i) == mp.end()){
                ans.push_back(i);
            }
        }
       
        return ans;
    }

};