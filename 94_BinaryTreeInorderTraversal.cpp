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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
            return res;
        InOrder(res,root);
        return res;
    }

    void InOrder(vector<int>& res,TreeNode* node)
    {
        if(node->left)
            InOrder(res,node->left);
        res.push_back(node->val);
        if(node->right)
            InOrder(res,node->right);
    }
};