# Definition for singly-linked list.
# class ListNode:
#   def __init__(self, x):
#       self.val = x
#       self.next = None

# solution using set
class Solution:
    def hasCycle(self, haed:ListNode)->bool:
        # check the input param
        if head is None:
            return False

        node_set = {}
        while head.next:
            node_set[head] = True
            if head.next in node_set:
                return True
            head = head.next

        return False

# solution using two pointer
class Solution:
    def hasCycle(self, head:ListNode)->bool:
        # check the input param
        if head == None or head.next == None:
            return False

        pslow = pfast = head
        while pfast != None and pfast.next != None:
            pslow = pslow.next
            pfast = pfast.next.next
            if pfast == pslow:
                break

        if pfast == None or pfast.next == None:
            return False
        elif pfast == pslow:
            return True

        return False

