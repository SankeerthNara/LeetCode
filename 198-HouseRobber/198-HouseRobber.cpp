// Last updated: 7/17/2026, 9:01:16 PM
1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        if(!nums.size()) return 0;
5        if(nums.size() == 1) return nums[0];
6        nums[1] = max(nums[1],nums[0]);
7        for(int i = 2 ; i < nums.size() ; i++)
8        {
9            nums[i] = max(nums[i]+nums[i-2] , nums[i-1]);
10        }
11        return nums[nums.size()-1];
12    }
13};