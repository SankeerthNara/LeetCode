// Last updated: 8/11/2026, 12:19:05 PM
1class Solution {
2public:
3    ListNode* reverseKGroup(ListNode* head, int k) {
4        // Check if there are at least k nodes
5        ListNode* temp = head;
6
7        for (int i = 0; i < k; i++) {
8            if (temp == nullptr)
9                return head;
10            temp = temp->next;
11        }
12
13        // Reverse the first k nodes
14        ListNode* prev = nullptr;
15        ListNode* curr = head;
16
17        for (int i = 0; i < k; i++) {
18            ListNode* next = curr->next;
19            curr->next = prev;
20            prev = curr;
21            curr = next;
22        }
23
24        // head is now the last node of this group
25        head->next = reverseKGroup(curr, k);
26
27        return prev;
28    }
29};