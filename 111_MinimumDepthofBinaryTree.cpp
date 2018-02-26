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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int res = INT_MAX;
        dfs(res,root,1);
        return res;
    }
    void dfs(int& res,TreeNode* node,int depth)
    {
        if(!node)
        {
            return;
        }
        if(!node->left&&!node->right)
        {
            res=res>depth?depth:res;
        }
        else
        {
            depth++;
            dfs(res,node->left,depth);
            dfs(res,node->right,depth);
        }
    }
};