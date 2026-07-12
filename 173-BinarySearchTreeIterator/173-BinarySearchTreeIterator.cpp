// Last updated: 7/12/2026, 9:37:04 PM
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
12class BSTIterator {
13public:
14    vector<int> ans;
15    int n=0;
16    int i=0;
17    void ino(TreeNode* root)
18    {
19        if(!root) return;
20        ino(root->left);
21        ans.push_back(root->val);
22        n++;
23        ino(root->right);
24        return;
25    }
26    BSTIterator(TreeNode* root) {
27        ino(root);
28    }
29    
30    int next() {
31        return ans[i++];
32    }
33    
34    bool hasNext() {
35        if(i<n) return true;
36        else return false; 
37    }
38};
39
40/**
41 * Your BSTIterator object will be instantiated and called as such:
42 * BSTIterator* obj = new BSTIterator(root);
43 * int param_1 = obj->next();
44 * bool param_2 = obj->hasNext();
45 */