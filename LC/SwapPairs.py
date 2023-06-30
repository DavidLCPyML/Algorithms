# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:

if not head or not head.next: return head

dummy = ListNode()
prev, curr = dummy, head

while curr and curr.next:
    prev.next = curr.next
    curr.next = prev.next.next
    prev.next.next = curr
    
    prev = curr
    curr = curr.next

return dummy.next