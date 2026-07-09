// Last updated: 7/9/2026, 10:23:34 PM
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
    int solve(TreeNode* root)
    {
        if(!root) return 0;
        if(ans) return -1;
        int left = solve(root->left);
        int right = solve(root->right);
        if(abs(left-right)>1)
        {
            ans = -1;
            return -1;
        }
        else return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        solve(root);
        if(ans) return false;
        else return true;
    }
};