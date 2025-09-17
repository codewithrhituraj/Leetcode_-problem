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

    void help(TreeNode* root,  vector<vector<int>> &ans,vector<int> v,int target){
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL){
            if(root->val==target){
                v.push_back(root->val);
                ans.push_back(v);
            }
        }
        v.push_back(root->val);

        help(root->left,ans,v,target-root->val);
         help(root->right,ans,v,target-root->val);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> ans;
        vector<int> v;
        help(root,ans,v,targetSum);
        return ans;


        
    }
};