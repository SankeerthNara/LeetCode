// Last updated: 7/21/2026, 8:28:48 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int c = 0;
15    int ans;
16    void ino(TreeNode* root, int k)
17    {
18        if(!root) return;
19        ino(root->left,k);
20        c++;
21        if(c == k)
22        {
23            ans = root->val;
24            return;
25        }
26        ino(root->right,k);
27        return;
28    }
29    int kthSmallest(TreeNode* root, int k) {
30        ino(root,k);
31        return ans;
32    }
33};