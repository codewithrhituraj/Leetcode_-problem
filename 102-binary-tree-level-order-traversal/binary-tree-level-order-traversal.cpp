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
    vector<vector<int>> ans;
   void level(TreeNode* root){
    if(root==NULL) return;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){

            int size=q.size();
            vector<int> levell;
            for(int i=1;i<=size;i++){
                TreeNode* node= q.front();
                q.pop();
                levell.push_back(node->val);
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);


            }
            ans.push_back(levell);


        }

   }
    vector<vector<int>> levelOrder(TreeNode* root) {
        level(root);
        return ans;
        
    }
};