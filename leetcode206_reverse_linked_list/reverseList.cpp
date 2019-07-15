class Solution {
	public:
		ListNode * reverseList(ListNode * head){
			if (head == NULL || head->next == NULL)
				return head;
			ListNode * tmp1 = head->next;
			ListNode * tmp2 = tmp1->next;

			head->next = NULL;
			while (tmp1 != NULL && tmp2 != NULL) {
				tmp1->next = head;
				head = tmp1;
				tmp1 = tmp2;
				tmp2 = tmp2->next;
			}
			tmp1->next = head;

			return tmp1;
		}

};
