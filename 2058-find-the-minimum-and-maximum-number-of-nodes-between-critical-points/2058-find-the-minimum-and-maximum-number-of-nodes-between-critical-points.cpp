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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        ListNode* prev = head;
        ListNode* curr = head->next;

        int pos = 1;

        int first = -1;
        int last = -1;

        int minDistance = INT_MAX;
        int maxDistance = -1;

        while (curr->next != nullptr) {

            ListNode* next = curr->next;

            // Check whether curr is a critical point
            if ((curr->val > prev->val && curr->val > next->val) ||
                (curr->val < prev->val && curr->val < next->val)) {

                // First critical point
                if (first == -1) {
                    first = pos;
                } else {
                    // Distance from previous critical point
                    minDistance = min(minDistance, pos - last);

                    // Distance from first critical point
                    maxDistance = pos - first;
                }

                // Update last critical point
                last = pos;
            }

            prev = curr;
            curr = curr->next;
            pos++;
        }

        // Less than 2 critical points
        if (first == -1 || first == last) {
            return {-1, -1};
        }

        return {minDistance, maxDistance};
    }
};