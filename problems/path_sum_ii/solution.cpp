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
vector<vector<int>> ans;
    void solve(TreeNode* root,int targetSum,int curr,vector<int> c)
    {   
        
        c.push_back(root->val);
        if(!root->left && !root->right)
        {
            if(curr == targetSum)
            ans.push_back(c);
            return;
        }
        
        if(root->left){solve(root->left,targetSum,curr+root->left->val,c);}
        if(root->right){ solve(root->right,targetSum,curr+root->right->val,c);}
        return;     
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return ans;
        vector<int> c;
        solve(root,targetSum,root->val,c);
        return ans;
    }
};