// Last updated: 9/12/2026, 6:09:13 PM
1class Solution {
2public:
3    int calculate(std::string s) {
4        int n = s.length();
5        std::stack<int> st;
6        long long currentNumber = 0;
7        char operation = '+';
8        
9        for (int i = 0; i < n; i++) {
10            char currentChar = s[i];
11            
12            if (std::isdigit(currentChar)) {
13                currentNumber = (currentNumber * 10) + (currentChar - '0');
14            }
15            
16            if ((!std::isdigit(currentChar) && !std::isspace(currentChar)) || i == n - 1) {
17                if (operation == '+') {
18                    st.push(currentNumber);
19                } else if (operation == '-') {
20                    st.push(-currentNumber);
21                } else if (operation == '*') {
22                    int topVal = st.top();
23                    st.pop();
24                    st.push(topVal * currentNumber);
25                } else if (operation == '/') {
26                    int topVal = st.top();
27                    st.pop();
28                    st.push(topVal / currentNumber);
29                }
30                
31                operation = currentChar;
32                currentNumber = 0;
33            }
34        }
35        
36        int result = 0;
37        while (!st.empty()) {
38            result += st.top();
39            st.pop();
40        }
41        
42        return result;
43    }
44};