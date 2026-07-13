// Last updated: 7/13/2026, 12:02:13 PM
1class Solution {
2public:
3    string largestNumber(vector<int>& nums) {
4        if(!accumulate(nums.begin(),nums.end(),0LL)) return "0";
5        sort(nums.begin(), nums.end(), [](int a, int b) {
6    return to_string(a) + to_string(b) >
7           to_string(b) + to_string(a);
8});
9        string ans = "";
10        for(int nu : nums)
11        {
12            ans+=to_string(nu);
13        }
14        return ans;
15    }
16};