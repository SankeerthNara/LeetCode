// Last updated: 8/18/2026, 9:40:05 PM
1class NumArray {
2    vector<int> prefix;
3
4public:
5    NumArray(vector<int>& nums) {
6        prefix.resize(nums.size() + 1);
7
8        for (int i = 0; i < nums.size(); i++) {
9            prefix[i + 1] = prefix[i] + nums[i];
10        }
11    }
12
13    int sumRange(int left, int right) {
14        return prefix[right + 1] - prefix[left];
15    }
16};