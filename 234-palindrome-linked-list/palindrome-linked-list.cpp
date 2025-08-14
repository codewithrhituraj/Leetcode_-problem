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
ListNode* reverseList(ListNode* head){
    ListNode* prev=NULL;
    ListNode* N=NULL;
    ListNode* curr=head;
    while(curr){
        N=curr->next;
        curr->next=prev;
        prev=curr;
        curr=N;
    }
    return prev;
}

    bool isPalindrome(ListNode* head) {
       // ListNode* temp=a;
       
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* another= slow->next;
        ListNode* re=reverseList(another);
        ListNode* b=re;
        ListNode* a= head;
        while(b!=NULL){
            if(a->val!=b->val) return false;
            a=a->next;
            b=b->next;
        }
        return true;
        


    }
};