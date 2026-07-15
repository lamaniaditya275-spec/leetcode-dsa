class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n == 1)return 1;
        int even  = 0 , odd = 0 , ans;
        for(int i = 1 ; i<= (n * 2) ; i++){
            if(i % 2 == 0){
                even += i;
            }else{
                odd += i;
            }
        }
      // cout << even << "" << odd ;
       
        while(even > 1){
           int temp =  odd % even ;
           odd = even;
           even = temp;
           //cout << "e " << even << "o " << odd << "\n"; 
        }
        return odd;
    }
};