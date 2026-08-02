// Last updated: 8/2/2026, 5:06:32 PM
1class Solution {
2public:
3    int numSquares(int n) {
4        vector<int> dp(n + 1, INT_MAX);
5        dp[0] = 0;
6
7        for (int i = 1; i <= n; i++) {
8            for (int j = 1; j * j <= i; j++) {
9                dp[i] = min(dp[i], dp[i - j * j] + 1);
10            }
11        }
12
13        return dp[n];
14    }
15};