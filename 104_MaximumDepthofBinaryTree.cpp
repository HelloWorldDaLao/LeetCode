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
    int maxDepth(TreeNode* root) {
        int res = 0;
        dfs(res,root,0);
        return res;
    }
    void dfs(int& res,TreeNode* node,int depth)
    {
        if(node)
        {
            depth++;
            res=res>depth?res:depth;
            dfs(res,node->left,depth);
            dfs(res,node->right,depth);
        }
        return;
    }
};