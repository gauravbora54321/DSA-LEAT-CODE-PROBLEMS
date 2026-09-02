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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next==NULL|| k==0){
                return head;
        }
        // step 1 length of list 
        int n= 1;
        ListNode* temp= head;
        while(temp->next!= NULL){
                temp=temp->next ;
                n++;
        }
        //step 2 k ko chota kro 
        k = k % n;
        if(k==0){
                return head;
        }
        // step 3 circle bana do 
        temp->next =head;
        
        //step 4 new tail find
        int steps = n-k;
        ListNode* newTail =head;
        for(int i=1; i<steps;i++){
                newTail = newTail->next;
        }
        //step 5 new head banao 
        ListNode* Head = newTail->next;
         
         // step 6 circle tod do 
         newTail->next= NULL;
         
         
          return Head;
    }
};