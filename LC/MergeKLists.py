# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
return split(lists, 0, len(lists)-1)

def split(lists, low, high):
    if low == high: return lists[low]
    elif low < high: 
        mid = (high + low) // 2
        return merge(split(lists, low, mid), split(lists, mid+1, high))
    else:
        return None

def merge(l1, l2):
    dummy = ListNode(0)
    curr = dummy.

    while l1 and l2:
        if l1.val < l2.val:
            curr.next = l1
            l1 = l1.next 
        else:
            curr.next = l2
            l2 = l2.next
        curr = curr.next
    
    curr.next = l1 if l1 else l2
    return dummy.next