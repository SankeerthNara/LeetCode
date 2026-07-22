// Last updated: 7/22/2026, 11:15:41 PM
1class Solution {
2public:
3    vector<string> ans;
4
5    void dfs(TreeNode* root, string path) {
6        if (!root) return;
7
8        if (!path.empty())
9            path += "->";
10        path += to_string(root->val);
11
12        if (!root->left && !root->right) {
13            ans.push_back(path);
14            return;
15        }
16
17        dfs(root->left, path);
18        dfs(root->right, path);
19    }
20
21    vector<string> binaryTreePaths(TreeNode* root) {
22        dfs(root, "");
23        return ans;
24    }
25};