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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> tmp;
        dfs(res,tmp,root,sum);
        return res;
    }
    void dfs(vector<vector<int>>& res,vector<int> tmp,TreeNode* root, int sum)
    {
        if(!root)
            return;
        if(!root->left&&!root->right&&sum==root->val) 
        {
            tmp.push_back(root->val);
            res.push_back(tmp);
            return;
        }
        if(!root->left&&!root->right&&sum!=root->val) 
            return;
        tmp.push_back(root->val);
        dfs(res,tmp,root->left,sum-root->val);
        dfs(res,tmp,root->right,sum-root->val);
    }
};