/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void getall(TreeNode* root , unordered_map<int, int>& mp){

        if(root == nullptr)return ;
        getall(root-> left , mp);
        mp[root->val]++;
        getall(root->right , mp);
    }

    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int>mp;

        getall(root, mp);

        int mx = -1;

        for(auto [num , cnt] : mp)if(cnt > mx)mx = max(mx , cnt);

        vector<int> ans;
        for(auto [n , cnts] : mp)if(mx == cnts)ans.push_back(n);
        return ans;
    }
};