class Solution {
public:
    int heightChecker(vector<int>& h) {
        bool done = true;
        vector<int> v;
         for(auto x: h){
            v.push_back(x);
        }
        int cou = 0;
        while(done){
            done = false;
            for(int i = 1; i<h.size(); i++){
                if(h[i] < h[i-1]){
                    swap(h[i],h[i-1]);
                    done = true;
                }
            }
        }
        for(int k = 0 ; k<v.size() ; k++){
            if(v[k] != h[k]){
                cou++;
            }
        }
        return cou;
    }
};