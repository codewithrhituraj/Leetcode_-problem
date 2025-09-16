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
int mx=0;
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left), levels(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int dia= levels(root->left) + levels (root->right); // ye root ke perspective se sirft ek ab mujhe har ek root ke lie nikal na hoga 
        mx=max(dia,mx);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return mx;

        
    }
};