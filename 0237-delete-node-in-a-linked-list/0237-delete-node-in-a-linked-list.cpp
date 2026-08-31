/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       node->val= node->next->val; // 4 = 4->next->5
       node->next = node->next->next; // 4->next = 4->next-next which means 1
        }
    
};