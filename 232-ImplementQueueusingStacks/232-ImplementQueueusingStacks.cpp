// Last updated: 7/21/2026, 8:38:24 PM
1class MyQueue {
2public:
3    vector<int> ans;
4    MyQueue() {
5        
6    }
7    
8    void push(int x) {
9        ans.push_back(x);
10        return;
11    }
12    
13    int pop() {
14        int t = ans[0];
15        ans.erase(ans.begin());
16        return t;
17    }
18    
19    int peek() {
20        return ans[0];
21    }
22    
23    bool empty() {
24        return ans.size() == 0;
25    }
26};
27
28/**
29 * Your MyQueue object will be instantiated and called as such:
30 * MyQueue* obj = new MyQueue();
31 * obj->push(x);
32 * int param_2 = obj->pop();
33 * int param_3 = obj->peek();
34 * bool param_4 = obj->empty();
35 */