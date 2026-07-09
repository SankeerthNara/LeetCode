// Last updated: 7/9/2026, 10:33:44 PM
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
    int ans = 0;
    void pre(TreeNode* root)
{
    if(!root) return;
    if(root->left)
    {
        root->left->val += root->val*10;
    }
    if(root->right)
    {
        root->right->val += root->val*10;
    }
    if(!root->left && !root->right)
    {
        ans+=root->val;
    }
    pre(root->left);
    pre(root->right);
    return;
}
    int sumNumbers(TreeNode* root) {
        pre(root);
        return ans;
    }
};