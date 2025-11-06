/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast=head;
    struct ListNode *slow=head;
    if(head==NULL)
    {
        return 0;
    }
    if(head->next==NULL)
    {
        return 0;
    }
    if(head->next->next==NULL)
    {
        return 0;
    }
    slow=slow->next;
    fast=fast->next->next;
    while(fast!=NULL&&fast->next!=NULL&&fast->next->next!=NULL)
    {
       if(slow==fast)
       {
        return 1;
       }
       else
       {
        slow=slow->next;
        fast=fast->next->next;
       }
    }   
    return 0; 
}