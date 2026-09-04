/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr){
            return nullptr;
        }
        Node* temp = head;
        while (temp != nullptr) {
            Node* copy = new Node(temp->val); // 7 /13
            copy->next = temp->next;          // 7-> 13
            temp->next = copy;                // 7->7->13
            temp = copy->next;
        }
        temp = head;
        while (temp != nullptr) {
            if (temp->random != nullptr) {
                temp->next->random = temp->random->next;
            }
            temp = temp->next->next;
        }
        Node* dummy = new Node(0);
        Node* temp1 = dummy;
        temp = head;
        while (temp != nullptr) {
            temp1->next = temp->next;
            temp->next = temp->next->next;
            temp = temp->next;
            temp1 = temp1->next;
        }
        return dummy->next;
    }
};