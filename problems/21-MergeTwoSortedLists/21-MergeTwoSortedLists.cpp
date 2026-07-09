// Last updated: 7/9/2026, 10:25:53 PM
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        ListNode* t1 = list1;
        ListNode* t2 = list2;

        while (t1 != NULL && t2 != NULL) {
            if (t1->val <= t2->val) {
                tail->next = t1;
                t1 = t1->next;
            } else {
                tail->next = t2;
                t2 = t2->next;
            }

            tail = tail->next;
        }

        if (t1 != NULL)
            tail->next = t1;

        if (t2 != NULL)
            tail->next = t2;

        return dummy.next;
    }
};