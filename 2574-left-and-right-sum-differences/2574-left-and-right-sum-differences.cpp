class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int > lf;
        vector<int> rg;
        int sum = 0 , n = nums.size();
        for(int i= 0; i<n; i++){
            lf.push_back(sum);
            sum += nums[i];
        }
        int sum2 = 0;
         for(int i= n - 1; i>=0; i--){
            rg.push_back(sum2);
            sum2 += nums[i];
        }
        // for(auto x : lf)cout << x ;
        // cout << " " << "\n";
        //  for(auto v : rg)cout << v ;
        reverse(rg.begin(), rg.end());
        for(int k = 0; k<n; k++){
            nums[k] = abs(lf[k]- rg[k]);
        }
        return nums;
    }
};