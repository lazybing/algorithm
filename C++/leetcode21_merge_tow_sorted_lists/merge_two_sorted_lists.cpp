/**
 * Definition for singly-linked list.
 * struct ListNode {
 *      int val;
 *      ListNode *next;
 *      ListNode(int x):val(x),next(NULL){}
 * };
 */
class Solution {
    public:
        ListNode *mergeTowLists(ListNode *l1, ListNode *l2){
            if(l1 == NULL) return l2;
            if(l2 == NULL) return l1;

            ListNode tmpList(0);
            ListNode *pList = &tmpList;
            while(l1 != NULL && l2 != NULL){
                if(l1->val < l2->val){
                    pList->next = l1;
                    l1 = l1->next;
                }else{
                    pList->next = l2;
                    l2 = l2->next;
                }
               pList = pList->next; 
            }
            pList->next = l1 ? l1 : l2;

            return tmpList.next;
        }
};

