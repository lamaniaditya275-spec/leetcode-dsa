class Solution {
public:
    vector<int> runningSum(vector<int>& n) {
        int sum = 0;

        for(int i =0 ; i<n.size(); i++){
            sum += n[i];
            n[i] = sum;
        }
        return n;
    }
};