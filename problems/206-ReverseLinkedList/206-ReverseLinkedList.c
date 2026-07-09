// Last updated: 7/9/2026, 10:22:04 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL||head->next==NULL){return head;}
    struct ListNode *prev=NULL;
    struct ListNode *curr=head;
    struct ListNode *upc=head->next;
    while(curr!=NULL)
    {
         upc=curr->next;
        curr->next=prev;
         prev=curr;
        curr=upc;
       
    }
    head=prev;   
    return head;

}