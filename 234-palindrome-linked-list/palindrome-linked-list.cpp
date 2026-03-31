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

    ListNode* reverse(ListNode* head){
        ListNode* curr= head;
        ListNode* N= NULL;
        ListNode* prev= NULL;
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
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* nn= slow->next;
        ListNode* te= head;
        slow->next=NULL;
        ListNode* re= reverse(nn);
        
        while(re!=NULL){
            if(re->val!=te->val) return false;
            re=re->next;
            te=te->next;
        };
        return true;
    }
};