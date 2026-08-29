class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> mp;

        for(auto x : s)mp[x]++;

        vector<pair<char ,int>> v;

        for(auto [val , cnt] : mp){
            v.emplace_back(val , cnt);
        }

        sort(v.begin(), v.end(), [](auto& a, auto&b){
            return a.second > b.second;
        });
       
        string ans ;

        for(auto [val ,cnt]: v){
            ans += string(cnt , val);
        }
        return ans;
    }
};