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
    vector<int> store_vec(ListNode* head){
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        return v;
    }
    void reorderList(ListNode* head) {
        vector<int> v=store_vec(head);
        int first=0;
        int last=v.size()-1;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            if(cnt%2==0){
                temp->val=v[first];
                first++;
                temp=temp->next;
                cnt++;
            }
            else{
                temp->val=v[last];
                last--;
                temp=temp->next;
                cnt++;
            }
        }
      //  return head;

        
    }
};