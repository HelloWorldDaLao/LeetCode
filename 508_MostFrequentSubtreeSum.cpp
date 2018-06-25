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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> res;
        unordered_map<int,int> hash;
        int mx = 0;
        helper(root,hash,mx);
        for (auto a : hash) 
        {
            if (a.second == mx) 
            {
                res.push_back(a.first);
            }
        }
        return res;
    }
    int helper(TreeNode* node,unordered_map<int,int>& hash,int& mx)
    {
        if(!node)
            return 0;
        int left = helper(node->left,hash,mx);
        int right = helper(node->right,hash,mx);
        int sum = left+right+node->val;
        hash[sum]++;
        mx=max(mx,hash[sum]);
        return sum;
    }
};