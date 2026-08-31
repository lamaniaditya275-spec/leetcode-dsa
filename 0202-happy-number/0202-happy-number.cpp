class Solution {
public:
   int sumofdigits(int num){
    int total = 0;
    while(num){
        int dig = num % 10;
        total += (dig * dig);
        num /= 10;
    }
    return total;
   }

    bool isHappy(int n) {
       
        while(n > 1){
            
            if(n == 4 || n == 2) return false;
            n = sumofdigits(n); 
           
        }
        return true;
    }
};