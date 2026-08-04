// Last updated: 8/4/2026, 11:06:13 PM
1class Solution {
2public:
3    int lengthOfLIS(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<int> dp(n, 1);
7
8        int ans = 1;
9
10        for(int i = 0; i < n; i++)
11        {
12            for(int j = 0; j < i; j++)
13            {
14                if(nums[j] < nums[i])
15                {
16                    dp[i] = max(dp[i], dp[j] + 1);
17                }
18            }
19
20            ans = max(ans, dp[i]);
21        }
22
23        return ans;
24    }
25};