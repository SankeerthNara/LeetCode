class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = NULL;
        ListNode* car = NULL;
        int carry = 0;

        while(l1 != NULL || l2 != NULL) {
            int temp = carry;

            if(l1) {
                temp += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                temp += l2->val;
                l2 = l2->next;
            }

            carry = temp / 10;
            temp = temp % 10;

            ListNode* t = new ListNode(temp);

            if(!car) {
                root = t;
                car = t;
            } else {
                car->next = t;
                car = t;
            }
        }

        if(carry) {
            ListNode* t = new ListNode(carry);
            car->next = t;
        }

        return root;
    }
};