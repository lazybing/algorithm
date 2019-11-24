class Solution {
    public:
        ListNode *partition(ListNode* head, int x) {
            if (head == nullptr) return head;

            ListNode left(0), right(0);
            ListNode *l = &left, *r = &right;

            while (head) {
                if (head->val < x) {
                    l->next = head;
                    l = l->next;
                } else {
                    r->next = head;
                    r = r->next;
                }
                head = head->next;
            }
            l->next = right.next;
            r->next = nullptr;

            return left.next;
        }
};
