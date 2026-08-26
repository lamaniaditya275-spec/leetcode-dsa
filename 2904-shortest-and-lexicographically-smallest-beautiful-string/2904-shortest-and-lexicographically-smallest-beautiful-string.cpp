class Solution {
public:
    int counter(string str) {
        int c = 0;
        for (auto ca : str) {
            if (ca == '1')
                c++;
        }
        return c;
    }

    string shortestBeautifulSubstring(string s, int k) {
        int l = s.size();
        int prev = l ;
        string ans = "";

        string ss;
        for (int i = 0; i < l; i++) {
            for (int len = 1; len <= l - i; len++) {
                ss = s.substr(i, len);
                if (counter(ss) == k) {
                    if (ss.size() < prev) {
                        prev = ss.size();
                        ans = ss;
                    }
                    if(ss.size() == prev && ans == ""){
                        ans = ss;
                    }
                    if(ss.size() == prev && ans != ""){
                        if(ans > ss){
                            ans=ss;
                        }
                    }
                }
            }
        }

        return ans;
    }
};