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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* a= head;
        if(head==NULL or head->next==nullptr) return head;
        ListNode* b= head->next;
        while(b!=NULL){
            while(b!=NULL and a->val == b->val){
                b=b->next;
            }
            a->next=b;
            a=b;
            if(b!=NULL) b=b->next;

        }
        return head;        
    }
};