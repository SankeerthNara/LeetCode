// Last updated: 7/9/2026, 10:33:12 PM
class MinStack {
public:
    stack<int> st;
    stack<int> mn;

    MinStack() {

    }

    void push(int val) {
        st.push(val);

        if(mn.empty() || val <= mn.top())
            mn.push(val);
    }

    void pop() {
        if(st.top() == mn.top())
            mn.pop();

        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return mn.top();
    }
};