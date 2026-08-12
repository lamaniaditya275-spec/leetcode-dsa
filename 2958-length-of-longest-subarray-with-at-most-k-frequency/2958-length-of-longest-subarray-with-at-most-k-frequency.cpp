class Solution {
public:
    int maxSubarrayLength(vector<int>& n, int k) {
        unordered_map<int, int> mp;
        int cou = 0, left = 0;
        for (int i = 0; i < n.size(); i++) {
            mp[n[i]]++;
            // cout << mp[n[i]] << "\n";
            while (mp[n[i]] > k) {
                mp[n[left]]--;
                left++;
            }
            cou = max(cou , i -left +1);
        }

        return cou;
    }
};