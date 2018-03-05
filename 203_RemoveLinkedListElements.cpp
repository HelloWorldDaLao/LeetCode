/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {     
        while(head&&head->val==val)
        {
            head=head->next;
        }
        if(!head)
            return head;
        ListNode *tmp = head;
        while(tmp->next)
        {
            if(tmp->next->val==val)
                tmp->next=tmp->next->next;
            else
                tmp=tmp->next;
        }
        return head;
    }
};