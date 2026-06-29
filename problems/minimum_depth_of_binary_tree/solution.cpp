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
    int solve(TreeNode* root)
    {
        if(!root) return 0;
        int left = INT_MAX;
        int right = INT_MAX;
        if(!root->left && !root->right) return 1;
        if(root->left)left = solve(root->left);
        if(root->right) right = solve(root->right);
        return min(left,right)+1;
    }
    int minDepth(TreeNode* root) {
        return solve(root);   
    }
};