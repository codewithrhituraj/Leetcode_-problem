/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* listA= headA;
        ListNode* listB=headB;
        int cnta=0;
        int cntb=0;
        while(listA!=NULL){
            cnta++;
            listA=listA->next;
        }  

        while(listB!=NULL){
            cntb++;
            listB=listB->next;
        }
        listA=headA;
        listB=headB;
        if(cnta>cntb){
            int diff=cnta-cntb;
            for(int i=1;i<=diff;i++){
                listA=listA->next;
            }
            while(listA!=listB){
                listA=listA->next;
                listB=listB->next;
            }
            return listA;
        }
        else{
            int diff=cntb-cnta;
            for(int i=1;i<=diff;i++){
                listB=listB->next;
            }
            while(listB!=listA){
                listB=listB->next;
                listA=listA->next;
            }
            return listA;

        }
    }
};