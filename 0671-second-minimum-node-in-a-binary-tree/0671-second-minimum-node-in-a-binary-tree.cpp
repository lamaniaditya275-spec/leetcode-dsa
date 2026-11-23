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
    void getall(TreeNode* root , vector<int>& v){
        if(root == nullptr)return ;
        getall(root->left , v);
        v.push_back(root->val);
        getall(root->right ,v);
    }

    int findSecondMinimumValue(TreeNode* root) {
        vector<int> v;
        getall(root , v);
        sort(v.begin(), v.end());

        auto it = unique(v.begin(), v.end());

        v.erase(it , v.end());
        cout << v.size();
        if(v.size() <= 1)return -1; else return v[1];
    }
};