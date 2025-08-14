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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int>(n, -1));

        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;

        while (head != NULL && minr <= maxr && minc <= maxc) {
            // Right
            for (int col = minc; col <= maxc && head != NULL; col++) {
                matrix[minr][col] = head->val;
                head = head->next;
            }
            minr++;

            // Down
            for (int row = minr; row <= maxr && head != NULL; row++) {
                matrix[row][maxc] = head->val;  // FIXED
                head = head->next;
            }
            maxc--;

            // Left
            for (int col = maxc; col >= minc && head != NULL; col--) {
                matrix[maxr][col] = head->val;
                head = head->next;
            }
            maxr--;

            // Up
            for (int row = maxr; row >= minr && head != NULL; row--) {
                matrix[row][minc] = head->val;
                head = head->next;
            }
            minc++;
        }

        return matrix;
    }
};
