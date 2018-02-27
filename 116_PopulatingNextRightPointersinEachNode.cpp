/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root==NULL)
            return;
        queue<TreeLinkNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeLinkNode* cur = NULL;
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                TreeLinkNode* tmp = q.front();
                q.pop();
                if(tmp->left)
                {
                    q.push(tmp->left);
                    if(cur)
                    {
                        cur->next=tmp->left;
                    }
                    cur=tmp->left;
                }
                if(tmp->right) 
                {
                    q.push(tmp->right);
                    if(cur)
                    {
                        cur->next=tmp->right;
                    }
                    cur=tmp->right;
                }
            }
        }
    }
};