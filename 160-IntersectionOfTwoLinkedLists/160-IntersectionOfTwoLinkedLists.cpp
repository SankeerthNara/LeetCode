// Last updated: 7/9/2026, 10:33:10 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = 0;
        ListNode* temp;
        temp = headA;
        while(temp)
        {
            n++;
            temp = temp->next;
        }
        temp = headB;
        while(temp)
        {
            n--;
            temp = temp->next;
        }
        if(n<=0)
        {
            temp = headB;
            n = -n;
            while(n)
            {
                temp = temp->next;
                n--;
            }
            ListNode* t= headA;
            while(t&&temp&&t!=temp)
            {
                t = t->next;
                temp=temp->next;
            }
            if(t == NULL || temp == NULL)
            {
                return NULL;
            }
            else return t;
        }
        else
        {
            temp = headA;
            while(n)
            {
                n--;
                temp = temp->next;
            }
            ListNode* t = headB;
            while(t && temp && t!=temp)
            {
                t = t->next;
                temp = temp->next;
            }
            if(t == NULL || temp == NULL)
            {
                return NULL;
            }
            else return t;
        }
    }
};