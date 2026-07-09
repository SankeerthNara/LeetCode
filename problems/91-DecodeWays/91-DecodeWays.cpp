// Last updated: 7/9/2026, 10:24:07 PM
class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();

        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        dp[1] = (s[0] != '0');

        for (int i = 2; i <= n; i++) {
            // Single digit
            if (s[i - 1] != '0')
                dp[i] += dp[i - 1];

            // Two digits
            int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');

            if (num >= 10 && num <= 26)
                dp[i] += dp[i - 2];
        }

        return dp[n];
    }
};