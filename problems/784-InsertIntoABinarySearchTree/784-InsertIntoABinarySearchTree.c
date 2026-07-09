// Last updated: 7/9/2026, 10:21:57 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode* create(int val)
 {
    struct TreeNode* new=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    new->val=val;
    new->left=NULL;
    new->right=NULL;
    return new;
 }
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if(root==NULL)
    {
        root=create(val);
    }
    else
    {
        if(root->val<val) root->right=insertIntoBST(root->right,val);
        else root->left=insertIntoBST(root->left,val);
    }
    return root;
}