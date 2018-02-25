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
private: 
    vector<TreeNode*> gt_helper(int start, int end){
        if(start > end)
            return {NULL};
        vector<TreeNode*> cur_nodes;
        for(int i=start; i<=end; ++i)
        {
            vector<TreeNode*> leftNodes = gt_helper(start, i-1);
            vector<TreeNode*> rightNodes = gt_helper(i+1, end);
            for(TreeNode* leftNode : leftNodes)
            {
                for(TreeNode* rightNode : rightNodes)
                {
                    TreeNode* cur_node = new TreeNode(i);
                    cur_node->left = leftNode;
                    cur_node->right = rightNode;
                    cur_nodes.push_back(cur_node);
                }
            }
        }
        return cur_nodes;
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        if(0 == n) return {};
        return gt_helper(1, n);
    }
};