// Last updated: 7/9/2026, 10:35:03 PM
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* k = NULL;
        ListNode* p = NULL;
        int triggered = 0;
        while(temp!=NULL)
        {
            if(temp->val >= x && !triggered){ k = temp; triggered = 1; p = prev;}
            else if(temp->val < x && triggered){
                ListNode* a = temp;
                prev->next = prev->next->next;
                if(p == NULL)
                {
                    head = a;
                    a->next = k;
                    p = a; 
                }
                else
                {
                p->next = a;
                a->next = k;
                p = p->next;
                }
                temp = prev->next;
                
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};