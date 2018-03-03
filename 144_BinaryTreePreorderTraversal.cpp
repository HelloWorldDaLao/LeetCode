/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(root,res);
        return res;
    }
    void dfs(TreeNode* node,vector<int>& res)
    {
        if(!node)
            return;
        res.push_back(node->val);
        dfs(node->left,res);
        dfs(node->right,res);
        return;
    }
};