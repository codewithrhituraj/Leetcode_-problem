/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void help(TreeNode* root, long long targetSum,int& cnt){
        if(root==NULL) return;
        if((long long)root->val==targetSum){
            cnt++;
        }

        help(root->left,(long long)targetSum-root->val,cnt);
        help(root->right,(long long)targetSum-root->val,cnt);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
          int cnt=0;
        help(root,targetSum,cnt);
      
        cnt+=(pathSum(root->left,targetSum) + pathSum(root->right,targetSum));
        return cnt;
        
    }
};