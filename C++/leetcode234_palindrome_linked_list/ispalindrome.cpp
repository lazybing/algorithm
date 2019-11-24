class Solution {
    public:
        bool isPalindrome(ListNode * head) {
            if (head == NULL || head->next == NULL)
                return true;
            ListNode *p1 = head;
            ListNode *p2 = head;

            while(p2->next != NULL && p2->next->next != NULL){
                p1 = p1->next;
                p2 = p2->next->next;
            }

            p1->next = reverseList(p1->next);
            p1 = p1->next;
            p2 = head;

            while(p1 != NULL){
                if (p1->val != p2->val)
                    return false;
                p2 = p2->next;
                p1 = p1->next;
            }

            return true;
        }

        ListNode* reverseList(ListNode *head) {
            ListNode *pre = NULL;
            ListNode *next = NULL;
            while(head != NULL) {
                next = head->next;
                head->next = pre;
                pre  = head;
                head = next;
            }

            return pre;
        }
};
