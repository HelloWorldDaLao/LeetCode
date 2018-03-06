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
		//这个地方没有将删除的节点delete掉，发生内存泄漏！！！
		//应该这样写：
		//ListNode* t = tmp->next;
		//tmp->next=t->next;
		//delete t;
                tmp->next=tmp->next->next;
            else
                tmp=tmp->next;
        }
        return head;
    }
};
