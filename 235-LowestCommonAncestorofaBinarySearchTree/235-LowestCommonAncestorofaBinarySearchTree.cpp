// Last updated: 7/22/2026, 10:25:08 PM
1class Solution {
2public:
3    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
4
5        while (root) {
6
7            if (p->val < root->val && q->val < root->val)
8                root = root->left;
9
10            else if (p->val > root->val && q->val > root->val)
11                root = root->right;
12
13            else
14                return root;
15        }
16
17        return nullptr;
18    }
19};