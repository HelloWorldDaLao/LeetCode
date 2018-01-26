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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1==NULL)
        {
		return l2;
        }
	if (l2==NULL)
	{
		return l1;
	}
	ListNode *result,*tmp;
	if(l1->val<l2->val)
	{
		result=l1;
		tmp=l1;
		l1=l1->next;
	}
	else
	{
		result=l2;
		tmp=l2;
		l2=l2->next;
	}
	while(l1!=NULL&&l2!=NULL)
	{
		if(l1->val<l2->val)
		{
			tmp->next=l1;
			tmp=tmp->next;
			l1=l1->next;
		}
		else
		{
			tmp->next=l2;
			tmp=tmp->next;
			l2=l2->next;
		}
	}
	if(l1==NULL)
	{
		tmp->next=l2;
		return result;
	}
	else
	{
		tmp->next=l1;
		return result;
	}
    }
};
