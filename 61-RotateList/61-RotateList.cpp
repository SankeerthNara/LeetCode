// Last updated: 7/9/2026, 10:35:35 PM
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
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head) return NULL;
        
        int n=0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            n++;
            temp = temp->next;
        }
        if(k%n == 0) return head;
        if(n == 1 || n == k) return head;
        ListNode* first = head;
        temp = head;
        for(int i = 0 ; i < (n-(k%n))-1 ; i++)
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = first;
        return head;
    }
};