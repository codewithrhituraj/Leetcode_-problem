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

    void help(TreeNode* root, vector<string> &v,string s){
        if(root==NULL) return;
        string d=to_string(root->val);
        if(root->left==NULL and root->right==NULL){
            s+=d;
            v.push_back(s);
            return;
        }

        help(root->left,v,s+d+"->");
        help(root->right,v,s+d+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        help(root,v,"");
        return v;

    }
};