// Last updated: 7/22/2026, 10:32:06 PM
1class Solution {
2public:
3    void deleteNode(ListNode* node) {
4        node->val = node->next->val;
5        ListNode* temp = node->next;
6        node->next = temp->next;
7        delete temp;
8    }
9};