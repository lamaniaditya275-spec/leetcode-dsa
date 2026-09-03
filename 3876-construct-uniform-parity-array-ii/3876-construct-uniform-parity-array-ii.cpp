class Solution {
public:
    bool uniformArray(vector<int>& n1) {
        vector<int> n2;
        int cou = 0;
        for (auto x : n1) {
            if (x % 2 == 0)
                cou++;
        }

        if (cou == 0 || cou == n1.size())
            return true;
        // if (cou == (n1.size() / 2))
        //     return false;
        int min = INT_MAX;
        for (auto v : n1) {
            if (v % 2 != 0) {
                if (v < min)
                    min = v;
            }
        }

        for (int i = 0; i < n1.size(); i++) {
            if (n1[i] % 2 != 0) {
                n2.push_back(n1[i]);
                cout << n1[i] << "\n";

            } else {
                int cur = n1[i] - min;
                if (cur >= 1) {
                    n2.push_back(cur);
                } else if (cur < 1) {
                    return false;
                }
                cout << cur << "\n";
            }
        }
        bool ans = true;
        for (auto a : n2) {
            if (a % 2 == 0) {
                ans = false;
            }
        }

        return ans;
    }
};