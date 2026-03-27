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
    bool hasCycle(ListNode* head) {
        map<ListNode*, bool> mp;
        if (head == NULL)
            return false;
        while (head->next != NULL) {
            if (mp[head] == true)
                return true;
            mp[head] = true;
            head = head->next;
            // mp[x]=true;
            // if()
        }
        return false;
    }
};