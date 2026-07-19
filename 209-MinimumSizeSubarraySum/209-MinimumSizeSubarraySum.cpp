// Last updated: 7/19/2026, 8:00:41 PM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int left = 0;
5        int sum = 0;
6        int ans = INT_MAX;
7
8        for (int right = 0; right < nums.size(); right++) {
9            sum += nums[right];
10
11            while (sum >= target) {
12                ans = min(ans, right - left + 1);
13                sum -= nums[left];
14                left++;
15            }
16        }
17
18        return ans == INT_MAX ? 0 : ans;
19    }
20};
21