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
    void f(TreeNode* root,int key,TreeNode* &temp){
        if(root==NULL){
            return ;
        }
        if(root->val==key){
            temp=root;
            return;
        }
        f(root->left,key,temp);
        f(root->right,key,temp);
        
        
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp=NULL;
        f(root,val,temp);
        return temp;
    }
};