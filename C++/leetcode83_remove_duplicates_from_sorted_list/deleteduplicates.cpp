class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head);
    if(head == NULL)
	return NULL;

    ListNode *pList1 = head;
    ListNode *pList2 = head;

    while (pList2->next != NULL) {
	if (pList2->next->val != pList1->val) {
	    pList1->next = pList2->next;
	    pList1 = pList1->next;
	    pList2 = pList2->next;
	} else {
	    pList2 = pList2->next;
	    pList1->next =pList2->next; //this is for the last dumplate case
	}
    }

    return head;
};
