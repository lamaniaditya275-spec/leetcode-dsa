class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int dum = d[0];
        for(int i = 1 ; i<d.size(); i++){
            dum ^= d[i];
        }
        if(dum == 0)return true;
        return false;
    }
};