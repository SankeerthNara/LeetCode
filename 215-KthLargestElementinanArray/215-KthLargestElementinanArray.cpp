// Last updated: 7/20/2026, 10:29:51 AM
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        sort(nums.begin(),nums.end(),greater<int>());
5        return nums[k-1];
6    }
7};