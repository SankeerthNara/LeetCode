// Last updated: 8/12/2026, 10:31:27 PM
1class Solution {
2public:
3    int longestValidParentheses(string s) {
4        int ans = 0;
5        stack<int> st;
6        vector<int> dp(s.size()+1, 0);
7        for( int i = 0 ; i < s.size() ; i++ )
8        {
9            if(s[i] == '(')
10            {
11                st.push(i);
12            }
13            else if(!st.empty())
14            {
15                dp[i+1] = i-st.top()+1+dp[st.top()];
16                st.pop();
17                ans = max(ans,dp[i+1]);
18            }
19        }
20        return ans;
21    }
22};