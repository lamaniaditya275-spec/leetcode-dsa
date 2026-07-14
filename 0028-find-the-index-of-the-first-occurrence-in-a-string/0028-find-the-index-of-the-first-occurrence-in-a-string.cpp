class Solution {
public:
    int strStr(string hy, string nd) {
        int l1 = hy.size();
        int l2 = nd.size() ;
        int i = 0;
        while (i < l1) {
            string s = hy.substr(i, l2);
          // cout << s << "\n";
            if (s == nd) {
                return i;
            }
           // i += nd.size() ;
           i++;
           // cout << i ;
           // l2 += nd.size() -1;
           // cout << l2  << "\n";
        }
        return -1;
    }
};