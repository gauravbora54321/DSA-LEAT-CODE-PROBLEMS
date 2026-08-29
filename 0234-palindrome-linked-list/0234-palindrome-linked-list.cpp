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
    bool isPalindrome(ListNode* head) {
        // tortoise algo
        if (head == nullptr) {
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // reverse the linked list and assume we hai one above linked list and a
        // one of reverse linkedlist
        ListNode* curr = slow;
        ListNode* prev = nullptr;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // the compare both list element in first the start from first and
        // second start fromm last
        ListNode* first = head;
        ListNode* second = prev;
        while (second != nullptr) {
            if (first->val != second->val) {
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};