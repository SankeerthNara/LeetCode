// Last updated: 7/19/2026, 10:59:38 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map <int,int> mp;
5        for(int i = 0 ; i < nums.size() ; i++)
6        {
7            if(!mp.count(nums[i]))
8            {
9                mp[nums[i]] = i;
10            }
11            else if(i-mp[nums[i]] > k) mp[nums[i]] = i;
12            else return true;
13        }
14        return false;
15    }
16};