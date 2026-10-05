class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;

        for(int i = 0; i<nums.size() ; i++){
            int dig = nums[i]; 
            stack<int> s;
            while(dig){
                s.push(dig % 10);
                dig /= 10;
            }
            
            while(!s.empty()){
                v.push_back(s.top());
                s.pop();
            }
        }
        return v;
    }
};