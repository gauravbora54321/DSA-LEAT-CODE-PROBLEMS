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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val; // 0+2  0+4  1+3
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val; // 5+2  4+6 4+4
                l2 = l2->next;
            }
            carry = sum / 10;                    // carry = 10/10 =1
            temp->next = new ListNode(sum % 10); // 7 , 0 ,8
            temp = temp->next;
        }
        return dummy->next;
    }
};