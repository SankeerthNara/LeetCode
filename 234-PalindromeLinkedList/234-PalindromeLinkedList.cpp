// Last updated: 7/21/2026, 8:35:25 PM
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
13    bool isPalindrome(ListNode* head) {
14        vector<int> ans;
15        while(head)
16        {
17            ans.push_back(head->val);
18            head = head->next;
19        }
20        int i = 0 ;
21        int j = ans.size()-1;
22        while(i < j)
23        {
24            if(ans[i]!=ans[j]) return false;
25            i++;
26            j--;
27        }
28        return true;
29    }
30};