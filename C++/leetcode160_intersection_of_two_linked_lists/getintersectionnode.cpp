class Solution {
    public:
        ListNode *getIntersectionNode (ListNode *headA, ListNode *headB) {
            if (headA == NULL || headB == NULL) 
                return NULL;

            ListNode *pA = headA, *pB = headB;
            bool flagA = 0, flagB = 0;

            while (pA != pB) {
                if (pA->next != NULL)
                    pA = pA->next;
                else {
                    pA = headB;
                    if (flagA)  return NULL;
                    flagA = 1;
                }

                if (pB->next != NULL)
                    pB = pB->next;
                else {
                    pB = headA;
                    if (flagB) return NULL;
                    flagB = 1;
                }
            }

            return pA;
        }
};
