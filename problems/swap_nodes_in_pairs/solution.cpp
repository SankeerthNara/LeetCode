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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL && temp->next!=NULL)
        {
            ListNode* t = temp->next->next;
            ListNode* t1 = temp->next;
            temp->next = t;
            t1->next = temp;
            if(prev == NULL)
            {
                head = t1;
            }
            else
            {
                prev->next = t1;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};