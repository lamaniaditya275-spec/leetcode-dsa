class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 , temp = n;
        int prod =1;
 
        while(n){
            int dig = n % 10;
            sum += dig;
            prod *= dig;
            n /= 10;
        }
        if(temp %(sum + prod) == 0){
            return true;
        }
        return false;
    }
};