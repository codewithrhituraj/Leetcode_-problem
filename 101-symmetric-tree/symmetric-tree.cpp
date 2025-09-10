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
    bool issym(TreeNode* p , TreeNode* q){
        if(p==NULL and q==NULL) return true;
        if(p==NULL or q==NULL) return false;
               if(p->val == q->val && issym(p->left,q->right) && issym(p->right,q->left)){         return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return issym(root->left,root->right);
        
    }
};