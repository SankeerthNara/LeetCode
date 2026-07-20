// Last updated: 7/20/2026, 9:45:56 PM
1class MyStack {
2public:
3    vector<int> ans;
4    int p;
5    MyStack() {
6        p = 0;
7    }
8    
9    void push(int x) {
10        p++;
11        ans.push_back(x);
12    }
13    
14    int pop() {
15        int k = ans[--p];
16        ans.pop_back();
17        return k;
18    }
19    
20    int top() {
21        return ans[p-1];
22    }
23    
24    bool empty() {
25        if(p) return false;
26        return true;
27    }   
28};
29
30/**
31 * Your MyStack object will be instantiated and called as such:
32 * MyStack* obj = new MyStack();
33 * obj->push(x);
34 * int param_2 = obj->pop();
35 * int param_3 = obj->top();
36 * bool param_4 = obj->empty();
37 */