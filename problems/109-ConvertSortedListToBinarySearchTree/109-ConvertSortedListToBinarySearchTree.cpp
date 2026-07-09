// Last updated: 7/9/2026, 10:23:36 PM
class Solution {
public:
    ListNode* curr;

    TreeNode* build(int l, int r) {
        if (l > r) return nullptr;

        int mid = l + (r - l) / 2;

        TreeNode* left = build(l, mid - 1);

        TreeNode* root = new TreeNode(curr->val);
        curr = curr->next;

        root->left = left;
        root->right = build(mid + 1, r);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        int n = 0;
        ListNode* temp = head;

        while (temp) {
            n++;
            temp = temp->next;
        }

        curr = head;
        return build(0, n - 1);
    }
};