class Solution {
public:
    int missingInteger(vector<int>& n) {
        int sum = n[0], l = 0;
       

        if (n.size() == 1)
            return n[0] + 1;
        for (int i = 1; i < n.size(); i++) {
            if (n[l] == (n[i] - 1)) {
                l++;
                sum += n[i];
                // cout << sum << "\n" ;
            } else {
                break;
            }
        }
        sort(n.begin(),n.end());
        int x = sum;
        for(auto y : n){
            if(x == y)x++;
        }
        return x;
    }
};