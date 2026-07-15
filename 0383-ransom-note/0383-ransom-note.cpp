class Solution {
public:
    bool canConstruct(string r, string m) {
        // int l1 = r.size();
        // int l2 = m.size();
        // int j = 0;
        // bool ans = false;
        // for (int i = 0; i < l1; i++) {
        //     if (r[j] == m[i]) {
        //         ans = true;
        //         j++;
        //     } else {
        //         ans = false;
        //     }
        // }
        // return ans;
        sort(r.begin() , r.end());
        sort(m.begin() , m.end());
        int j = 0;
        for(int i=0; i<m.size() ; i++){
            if(r[j] == m[i]){
                if(r.size() == j +1 ){
                    return true;
                }
                j++;
            }
        }

    return false;

    }
};