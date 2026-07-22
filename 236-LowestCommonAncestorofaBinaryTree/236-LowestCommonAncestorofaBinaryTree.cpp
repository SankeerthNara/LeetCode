// Last updated: 7/22/2026, 10:25:59 PM
1class Solution {
2public:
3    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
4
5        if (!root || root == p || root == q)
6            return root;
7
8        TreeNode* left = lowestCommonAncestor(root->left, p, q);
9        TreeNode* right = lowestCommonAncestor(root->right, p, q);
10
11        if (left && right)
12            return root;
13
14        return left ? left : right;
15    }
16};