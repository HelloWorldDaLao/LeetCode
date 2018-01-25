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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *a,*b,*c;
        a = b = c= head;
        for(int i=0;i<n;i++)
		{
			b=b->next;
		}
        if(b==NULL)
        {
            c=c->next;
            free(a);
            return c;
        }
		while(b->next!=NULL)
		{
			a=a->next;
			b=b->next;
		}
		b=a->next;
		free(b);
		a->next=a->next->next;
        return c;
    }
};