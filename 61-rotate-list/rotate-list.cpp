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
        ListNode* temp = head;
        if(head==NULL or head->next==NULL) return head;
        int n=0;
        ListNode* tail= head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
            if(tail->next!=NULL) tail=tail->next;
        }

        k=k%n;
        int idx=n-k;
        temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;

        }
        tail->next=head;
        head= temp->next;
        temp->next=NULL;
        return head;
        
    }
};