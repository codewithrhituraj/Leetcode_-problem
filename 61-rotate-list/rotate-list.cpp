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
        if(head==NULL or head->next==NULL) return head;
        ListNode* temp= head;
        ListNode* tail=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
           
            if(temp->next!=NULL) tail=tail->next;
             temp=temp->next;

        }
       // while(tail->next!=NULL) tail=tail->next;
        k=k%cnt;
        temp=head;
        for(int i=1;i<=cnt-k-1;i++){
            temp=temp->next;

        }


        tail->next=head;
        head=temp->next;
        temp->next= NULL;
        return head;




       // int len=0;

        
    }
};