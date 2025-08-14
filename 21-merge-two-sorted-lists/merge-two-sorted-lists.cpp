
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* dummy= new ListNode(1000);
        ListNode* temp=dummy;
        while(a!=NULL and b!=NULL){
            if(a->val<=b->val){
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
            else{
                temp->next=b;
                b=b->next;
                temp=temp->next;
            
            }
        }
        if(a==NULL){
            temp->next=b;
        }
        else temp->next=a;
        return dummy->next;
    }
};