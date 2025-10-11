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
        int cnt=0;
         if(head==NULL or head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* tail=head;
        while(temp!=NULL){
            if(temp->next==NULL) tail=temp;
            cnt++;
            temp=temp->next;
        }
        k=k%cnt;
        temp=head;
        int idx=cnt-k;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;

        return head;
    }
};