class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp (arr);
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());

       vector<int> res;
        res.reserve(arr.size());
        for (int x : arr) {
            res.push_back(lower_bound(temp.begin(), temp.end(), x) - temp.begin() + 1);
        }
        return res;
    }
};