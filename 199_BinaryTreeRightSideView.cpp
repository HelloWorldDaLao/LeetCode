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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        show(root,res,0);
        return res;
    }
    int show(TreeNode* node,vector<int>& res,int depth)
    {
        if(!node)
            return depth;
        int left=0,right=0;
        if(depth==0)
        {
            res.push_back(node->val);
            right=show(node->right,res,0);
            left=show(node->left,res,right);
        }
        else
        {
            right=show(node->right,res,depth-1);
            left=show(node->left,res,right);
        }
        return max(left,right)+1;
    }
};
