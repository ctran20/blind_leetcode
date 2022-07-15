/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }

        // Create temp vaules to prevent modifying linked list head
        ListNode* node1 = list1;
        ListNode* node2 = list2;
        
        // Keep track of the head of the merged list
        ListNode start = ListNode(-1, NULL);
        ListNode* prev = &start;
        
        while(node1 && node2){
            if(node1->val <= node2->val){
                prev->next = node1;
                node1 = node1->next;
            }
            else{
                prev->next = node2;
                node2 = node2->next;
            }
            
            prev = prev->next;
        }
        
        // Connect the rest of the unfinished list of the longer list
        prev->next = node1 ? node1 : node2;
        
        // Next node of start is the head of the lindked list
        return start.next;
        
    }
};