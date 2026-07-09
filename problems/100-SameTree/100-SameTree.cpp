// Last updated: 7/9/2026, 10:23:50 PM
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
    void solve(TreeNode* p, TreeNode* q)
    {
        if(p==NULL&&q == NULL)
        {
            ans+=0;
            return;
        }
        else if(p!=NULL && q == NULL || p == NULL && q!=NULL)
        {
            ans+=1;
            return;
        }
        else if(p->val!=q->val)
        {
            ans+=1;
            return;
        }
        else
        {
            solve(p->left,q->left);
            solve(p->right,q->right);
        }
        
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        solve(p,q);
        if(!ans) return true;
        else return false;
    }
    
};