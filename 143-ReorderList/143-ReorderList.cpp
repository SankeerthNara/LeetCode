// Last updated: 8/13/2026, 9:49:58 PM
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
13    void reorderList(ListNode* head) {
14        int n = 0;
15        ListNode* t = head;
16        while(t)
17        {
18            n++;
19            t=t->next;
20        }
21        if(n<=2) return;
22        t=head;
23        for(int i = 0 ; i< n/2-1; i++)
24        {
25            t=t->next;
26        }
27        ListNode* curr = t->next;
28        t->next = NULL;
29        t = NULL;
30        while(curr)
31        {
32            ListNode* n = curr->next;
33            curr->next = t;
34            t = curr;
35            curr = n;
36        }
37        curr = head;
38        while(t)
39        {
40            ListNode* n = curr->next;
41            curr->next = t;
42            curr = t;
43            t = n;
44        }
45        return;
46    }
47};