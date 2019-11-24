class Solution{
    public:
        ListNode* swapPairs(ListNode *head){
            if (head == NULL || head->next == NULL)
                return head;
            ListNode **p = &head;
            ListNode *a, *b;
            while((a = *pp) && (b = a->next)){
                a->next = b->next;
                b->next = a;
                *pp = b;
                pp = &(a->next);
            }
            return head;
        }
};
