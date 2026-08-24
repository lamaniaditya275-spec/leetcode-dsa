class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int maxx = 0 ;
        long long prev =0;

        for(int i= 0; i<d.size() ; i++){
                long long cur = (long long)d[i][0] *d[i][0] + (long long)d[i][1] * d[i][1] ;
                // cout << cur << " - " << prev << "\n";
                if(cur > prev ){
                    maxx = d[i][0] * d[i][1]; 
                    prev = cur;
                }
                else if( prev == cur){
                   maxx = max(maxx , d[i][0] * d[i][1] );
                }
         
        }
        return maxx;
    }
};