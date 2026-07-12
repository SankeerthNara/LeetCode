// Last updated: 7/12/2026, 9:18:02 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        return nums[nums.size()/2];   
6    }
7};