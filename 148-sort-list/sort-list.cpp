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
    ListNode* Merge_Sort(ListNode* a,ListNode* b){
        ListNode* dummy = new ListNode(-1);
        ListNode* temp= dummy;
        while(a!=NULL and b!=NULL){
            if(a->val<b->val){
                temp->next=a;
                temp=temp->next;
                a=a->next;
            }
            else{
                temp->next=b;
                temp=temp->next;
                b=b->next;
            }
        }
        if(a==NULL) temp->next=b;
        else temp->next= a;

        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* fast= head;
        ListNode* slow= head;
        while(fast->next!=NULL and fast->next->next!=NULL){//for left middle 
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=head;
        ListNode* b= slow->next;
        slow->next=NULL;
        // you have to call sortlist function for updating list from one 
        a=sortList(a);
        b=sortList(b);
        ListNode* c= Merge_Sort(a,b);
        return c;
        
    }
};