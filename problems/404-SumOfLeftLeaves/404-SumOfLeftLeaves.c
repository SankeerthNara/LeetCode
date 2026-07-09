// Last updated: 7/9/2026, 10:22:03 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    if(root==NULL) return 0;
    int ans=0;
    if(root->left!=NULL&&root->left->left==NULL&&root->left->right==NULL) ans+=root->left->val;
    ans+=sumOfLeftLeaves(root->left);
    
    ans+=sumOfLeftLeaves(root->right);
    return ans;
}