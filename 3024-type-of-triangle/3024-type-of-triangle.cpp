class Solution {
public:
    string triangleType(vector<int>& n) {
        sort(n.begin(), n.end());
        
        if((n[0] + n[1]) <= n[2] )return "none";

        if(n[0] == n[2])return "equilateral";

        if(n[0] == n[1] || n[1] == n[2]) return "isosceles";

        return "scalene";
    }
};