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
    int ans = -1;
    void solve(TreeNode* root,int targetSum,int curr)
    {
        if(ans == 0) return;
        if(!root->left && !root->right)
        {
            if(curr == targetSum)
            ans = 0;
            return;
        }
        if(root->left) solve(root->left,targetSum,curr+root->left->val);
        if(root->right) solve(root->right,targetSum,curr+root->right->val);
        return;     
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
        {
            return false;
        }
        solve(root,targetSum, root->val); 
        if(ans) return false;
        else return true;
    }
};