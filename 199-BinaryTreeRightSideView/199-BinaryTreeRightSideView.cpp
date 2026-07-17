// Last updated: 7/17/2026, 9:09:09 PM
1class Solution {
2public:
3    vector<int> ans;
4
5    void pre(TreeNode* root, int depth) {
6        if (!root) return;
7
8        if (ans.size() == depth)
9            ans.push_back(root->val);
10
11        pre(root->right, depth + 1);
12        pre(root->left, depth + 1);
13    }
14
15    vector<int> rightSideView(TreeNode* root) {
16        pre(root, 0);
17        return ans;
18    }
19};