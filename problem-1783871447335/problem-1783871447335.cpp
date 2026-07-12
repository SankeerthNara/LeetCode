// Last updated: 7/12/2026, 9:20:47 PM
1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4        int n = 0;
5        int ans = 0;
6        while(n < columnTitle.size())
7        {
8            ans*=26;
9            ans+=(columnTitle[n++]-'A'+1);
10        }
11        return ans;
12    }
13};