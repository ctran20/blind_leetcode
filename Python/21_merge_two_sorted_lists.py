# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1:
            return list2
        if not list2:
            return list1
        
        # Keep track of the head of the merged list
        start = ListNode(-1)
        prev = start
        
        # Create temp vaules to prevent modifying linked list head
        node1 = list1
        node2 = list2
        
        while node1 and node2:
            if node1.val <= node2.val:
                prev.next = node1
                node1 = node1.next
            else:
                prev.next = node2
                node2 = node2.next      
                
            prev = prev.next

        # Connect the rest of the unfinished list of the longer list
        if node1:
            prev.next = node1
        else:
            prev.next = node2

        # Next node of start is the head of the lindked list
        return start.next