/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:

    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> ans;
        ans.push(root);
        while(!ans.empty())
        {
            int k = ans.size();
            for(int i = 0 ; i < k ;i++)
            {
                Node* temp = ans.front();ans.pop();
                if(i<k-1) temp->next = ans.front();
                if(i == k-1) temp->next = NULL;
                if(temp->left) ans.push(temp->left);
                if(temp->right) ans.push(temp->right);
            }      
        }
        return root;
    }   
};