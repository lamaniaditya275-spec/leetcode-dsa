class Solution {
public:
    int productFinder(int temp, int prod) {
        while (temp > 0) {
            int digit = temp % 10;
            prod *= digit;
            temp /= 10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        int temp = n, cou = 0;

        int prod = productFinder(temp, 1);
        while (n <= 100) {
            if (prod % t == 0) {

                return n + cou;

            } else {
                cou++;
                prod = productFinder(n + cou, 1);
                
            }
        }
        return n;
    }
};