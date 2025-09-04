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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* temp= head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        int idx=cnt-n;
        if(idx==0){
            head=head->next;
            return head;
        }
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;

        }
        temp->next=temp->next->next;
        return head;
        
    }
};