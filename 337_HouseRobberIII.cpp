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
    int rob(TreeNode* root) {
        unordered_map<TreeNode*, int> hash;
        return dfs(root,hash);
    }
    int dfs(TreeNode* node, unordered_map<TreeNode*, int>& hash)
    {
        if(!node)
            return 0;
        if (hash.count(node)) 
            return hash[node];
        int val = node->val;
        if(node->right)
            val+=dfs(node->right->right,hash)+dfs(node->right->left,hash);
        if(node->left)
            val+=dfs(node->left->right,hash)+dfs(node->left->left,hash);
        hash[node] = max(val,dfs(node->right,hash)+dfs(node->left,hash));
        return hash[node];
    }
};