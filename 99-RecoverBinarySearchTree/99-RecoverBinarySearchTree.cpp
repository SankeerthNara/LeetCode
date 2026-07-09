// Last updated: 7/9/2026, 10:34:44 PM
class Solution {
public:
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    TreeNode* prev = nullptr;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);

        if (prev && prev->val > root->val) {
            if (!first) {
                first = prev;
            }
            second = root;
        }

        prev = root;

        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first->val, second->val);
    }
};