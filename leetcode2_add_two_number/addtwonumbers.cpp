class Solution {
public:
    ListNode * addTwoNumbers(ListNode *l1, ListNode *l2) {
        char carray = 0;
        ListNode preHead(0), *p = &preHead;
        
        while (l1 != NULL || l2 != NULL || carray) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carray;
            carray = sum >= 10;
            p->next = new ListNode(sum % 10);
            p = p->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }

        return preHead.next;
    }
};
