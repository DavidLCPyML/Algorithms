def reverseLinkedList(head):
    prev = None
    while head:
        nxt = head.next
        head.next = prev
        prev = head
        head = nxt
    return prev

def reverseLinkedList(head):
    if not head or not head.next:
        return head
    p = reverseLinkedList(head.next)
    head.next.next = head
    head.next = None
    return p
