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

    void help(TreeNode* root,vector<int> v,int &cnt,long long targetSum){
        if(root==NULL) return;
       
            if((long long)root->val==targetSum){
              //  v.push_back(root->val);
                cnt++;
            }
        
      //  v.push_back(root->val);

        help(root->left,v,cnt,(long long)targetSum-root->val);
        help(root->right,v,cnt,(long long)targetSum-root->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        vector<int> v;
        int cnt=0;
        help(root,v,cnt,targetSum);
        cnt+=(pathSum(root->left,targetSum) + pathSum(root->right,targetSum));
        return cnt;

        
    }
};