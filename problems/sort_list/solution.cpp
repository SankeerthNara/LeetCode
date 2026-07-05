/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* t = head;

        while (t && t->next) {
            if (t->val <= t->next->val) {
                t = t->next;
            } else {
                ListNode* x = t->next;

                // Detach x from its current position
                t->next = x->next;

                // Find insertion position
                ListNode* temp = head;
                ListNode* prev = nullptr;

                while (temp && temp->val < x->val) {
                    prev = temp;
                    temp = temp->next;
                }

                // Insert x
                if (prev)
                    prev->next = x;
                else
                    head = x;

                x->next = temp;

                // Do NOT move t
            }
        }

        return head;
    }
};