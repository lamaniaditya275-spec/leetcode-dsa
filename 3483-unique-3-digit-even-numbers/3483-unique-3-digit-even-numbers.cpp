class Solution {
public:
    

    int totalNumbers(vector<int>& digits) {
        int cnt[10]{};
        for (int d : digits) cnt[d]++;
        
        int ans = 0;
        for (int x = 100; x < 1000; x += 2) {
            int need[10]{};
            int t = x;
            while (t) { need[t % 10]++; t /= 10; }
            // check if we have enough of each digit
            bool ok = true;
            for (int i = 0; i < 10; i++)
                if (cnt[i] < need[i]) { ok = false; break; }
            if (ok) ans++;
        }
        return ans;
    }
};