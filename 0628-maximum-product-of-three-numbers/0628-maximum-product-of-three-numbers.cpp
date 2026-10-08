class Solution {
public:
    

    int maximumProduct(vector<int>& nums) {

    sort(nums.begin(), nums.end());
    int n = nums.size();
  
    int last = nums[n-1] , lsecond = nums[n-2] , lthrid = nums[n-3];
    int first = nums[0] , sec = nums[1];
    
    long long prod1= last * lsecond * lthrid; 
    long long prod2 = first*sec*last;
   
    if(prod1 < prod2){
        return prod2;
    }

    return prod1;



 
    // int k = 3;

    // // selector: first k positions are true, rest false
    // vector<bool> selector(nums.size() - k, false);
    // selector.resize(nums.size(), true);
    // long long sum  = INT_MIN;
    // do {
    //     vector<int> combo;
    //     for (int i = 0; i < nums.size(); ++i)
    //         if (selector[i])
    //             combo.push_back(nums[i]);
    //     int cur = 1;
    //     for (int x : combo) {
    //         cur *= x;
    //     }
    //     if(cur > sum)sum = cur;
        
    // } while (next_permutation(selector.begin(), selector.end()));
    // return sum;
    }
};