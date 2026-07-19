// Last updated: 7/19/2026, 10:18:41 PM
1class Solution {
2public:
3    int robLinear(vector<int>& nums, int l, int r) {
4        int prev2 = 0, prev1 = 0;
5
6        for (int i = l; i <= r; i++) {
7            int take = nums[i] + prev2;
8            int notTake = prev1;
9            int curr = max(take, notTake);
10
11            prev2 = prev1;
12            prev1 = curr;
13        }
14
15        return prev1;
16    }
17
18    int rob(vector<int>& nums) {
19        int n = nums.size();
20
21        if (n == 1)
22            return nums[0];
23
24        return max(
25            robLinear(nums, 0, n - 2),
26            robLinear(nums, 1, n - 1)
27        );
28    }
29};