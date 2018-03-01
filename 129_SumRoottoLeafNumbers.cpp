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
    int sumNumbers(TreeNode* root) {
        int res = 0;
        if(!root)
            return res;
        dfs(root,res,0);
        return res;
    }
    void dfs(TreeNode* root,int& res,int tmp)
    {
        tmp = tmp*10 + root->val;
        if(!root->left&&!root->right)
        {
            res+=tmp;
            return;
        }
        if(root->left)
        {
            dfs(root->left,res,tmp);
        }
        if(root->right)
        {
            dfs(root->right,res,tmp);
        }
        return;
    }
};