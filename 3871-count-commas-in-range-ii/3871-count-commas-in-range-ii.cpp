class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000)return 0;
        long long cou = 0;
        long long dou = 1000 ;

        while(dou <= n){
            cou +=  (n - dou ) +1 ;
            dou *= 1000; 
        } 
       
        return cou; 
    }
};