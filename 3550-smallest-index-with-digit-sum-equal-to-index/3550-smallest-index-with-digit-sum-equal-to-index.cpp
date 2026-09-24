class Solution {
public:
    int digSum(int n){
        int to = 0;
        while(n){
            to += n % 10;
            n /= 10;
        }
        return to;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i= 0; i<nums.size(); i++){
            if(digSum(nums[i]) == i)return i;
        }
        return -1;
    }
};