class Solution {
public:
    int gcds(int a, int b) {
       
        while (b) {
            int temp =  a % b;
            a = b;
            b = temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int mx = nums[0];
        vector<int> g;
        for (int i = 0; i < nums.size(); i++) {
            if (mx < nums[i])
                mx = nums[i];
            g.push_back(gcds(mx, nums[i]));
            
        }
        sort(g.begin(), g.end());
        long long  sum = 0;
        int i = 0, j = g.size() - 1;
        
        while(i < j){
           int d= gcds(g[i], g[j]);
           sum += d;
          // cout << d ;
           i++;
           j--;
        }
        // for (auto x : g) {
        //     cout << x << "\n";
        // }

        return sum;
    }
};