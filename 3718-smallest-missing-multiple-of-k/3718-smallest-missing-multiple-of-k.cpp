class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> v;

        for(auto x : nums)if(x % k == 0)v.push_back(x);
       
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(),v.end()) ,v.end());

        int st = 1;

        for(auto d : v){
            if(d == k * st && st<=v.size()){
                st++;
            }
            else{
                return k * st;
            }
        }
        return k * (v.size() + 1) ;
    }
};