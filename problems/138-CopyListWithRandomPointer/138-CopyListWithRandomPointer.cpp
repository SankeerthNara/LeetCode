// Last updated: 7/9/2026, 10:22:47 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        unordered_map<Node*, Node*> mp;

        // First pass: Create a copy of every node
        Node* curr = head;
        while (curr) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }

        // Second pass: Connect next and random pointers
        curr = head;
        while (curr) {
            mp[curr]->next = mp[curr->next];
            mp[curr]->random = mp[curr->random];
            curr = curr->next;
        }

        return mp[head];
    }
};