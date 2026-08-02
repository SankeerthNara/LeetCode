// Last updated: 8/2/2026, 12:13:06 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int sum = accumulate(nums.begin(),nums.end(),0);
6        int ac = (n*(n+1))/2;
7        return ac-sum;
8    }
9};