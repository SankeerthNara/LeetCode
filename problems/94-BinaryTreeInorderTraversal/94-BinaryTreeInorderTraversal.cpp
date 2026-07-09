// Last updated: 7/9/2026, 10:24:02 PM
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
vector<int> ans;
    void ino(TreeNode* root)
    {
        if(!root) return;
        ino(root->left);
        ans.push_back(root->val);
        ino(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        ino(root);
        return ans;
    }
};