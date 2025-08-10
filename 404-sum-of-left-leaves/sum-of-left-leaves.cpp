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
    void inorder(TreeNode* root,bool check,int& sum){
        if(root==NULL) return;
        if(check==true and root->left==NULL and root->right==NULL) sum+=root->val;
        inorder(root->left,true,sum);
        inorder(root->right,false,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        inorder(root,false,sum);
        return sum;
    }
};