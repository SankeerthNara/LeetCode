// Last updated: 8/13/2026, 9:29:30 PM
1class Solution {
2public:
3    bool isMatch(string s, string p) {
4        int n = s.size();
5        int m = p.size();
6
7        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
8
9        dp[0][0] = true;
10
11        // Empty string matched by '*'s
12        for (int j = 1; j <= m; j++) {
13            if (p[j - 1] == '*')
14                dp[0][j] = dp[0][j - 1];
15        }
16
17        for (int i = 1; i <= n; i++) {
18            for (int j = 1; j <= m; j++) {
19
20                if (p[j - 1] == s[i - 1] || p[j - 1] == '?') {
21                    dp[i][j] = dp[i - 1][j - 1];
22                }
23                else if (p[j - 1] == '*') {
24                    dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
25                }
26            }
27        }
28
29        return dp[n][m];
30    }
31};