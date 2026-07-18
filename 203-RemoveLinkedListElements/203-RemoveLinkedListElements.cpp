// Last updated: 7/18/2026, 5:54:58 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeElements(ListNode* head, int val) {
14       ListNode* dummy = new ListNode();
15        dummy->next = head;
16        ListNode* prev = dummy;
17        while(head)
18        {
19            if(head->val == val)
20            {
21                prev->next = head->next;
22            }
23            else
24            {
25                prev = head;
26
27            }
28            head = prev->next;
29        }
30        return dummy->next;
31    }
32};