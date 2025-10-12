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
    ListNode* reversee(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* N= NULL;
        while(curr){
           N=curr->next;
           curr->next=prev;
           prev=curr;
           curr=N;

        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            

        //FIST MIDDLE ;
        slow=slow->next;
        fast=fast->next->next;
    } 

    ListNode* jj= slow->next;
    ListNode* re= reversee(jj);
    ListNode* temp= head;
    while(re!=NULL){
        if(temp->val!=re->val) return false;
        temp=temp->next;
        re=re->next;
    }
    return true;
  }
};