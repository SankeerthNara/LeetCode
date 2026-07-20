// Last updated: 7/20/2026, 8:25:14 PM
1class Solution {
2public:
3    int maximalSquare(vector<vector<char>>& matrix) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6
7        vector<vector<int>> dp(n, vector<int>(m, 0));
8        int maxi = 0;
9
10        for (int i = 0; i < n; i++) {
11            for (int j = 0; j < m; j++) {
12
13                if (matrix[i][j] == '1') {
14
15                    if (i == 0 || j == 0)
16                        dp[i][j] = 1;
17                    else
18                        dp[i][j] = 1 + min({
19                            dp[i-1][j],
20                            dp[i][j-1],
21                            dp[i-1][j-1]
22                        });
23
24                    maxi = max(maxi, dp[i][j]);
25                }
26            }
27        }
28
29        return maxi * maxi;
30    }
31};