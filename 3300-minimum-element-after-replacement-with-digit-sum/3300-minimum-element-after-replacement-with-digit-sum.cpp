class Solution {
public:
    int digcounter(int n){
        int to = 0;

        while(n){
            to += (n % 10);
            n /= 10;
        }
        return to;
    }
    int minElement(vector<int>& nums) {
        int sm = INT_MAX;

        for(int i =0 ; i<nums.size(); i++){
            int cur = digcounter(nums[i]);
            if(sm > cur ){
                sm =cur ;
            }
        }
        return sm;
    }
};