// Last updated: 8/2/2026, 5:10:28 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4       int k = 0;
5       for(int i : nums)
6       {
7            if(i!=0) nums[k++] = i;
8       }
9       for(int i = k ; i < nums.size() ; i++)
10       {
11        nums[i] = 0;
12       }
13       return;
14    }
15};