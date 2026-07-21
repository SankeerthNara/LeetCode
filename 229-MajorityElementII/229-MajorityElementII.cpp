// Last updated: 7/21/2026, 8:25:10 PM
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        int n = nums.size();
5        unordered_map<int,int> mp;
6        vector<int> ans;
7        for(int i = 0 ; i < n ; i++)
8        {
9            if(!mp.count(nums[i])) 
10            {
11                mp[nums[i]] = 1;
12                if(mp[nums[i]] > n/3)
13                {
14                    ans.push_back(nums[i]);
15                    mp[nums[i]] =-1;
16                }
17            }
18            else if(mp[nums[i]] == -1) continue;
19            else
20            {
21                mp[nums[i]]++;
22                if(mp[nums[i]] > n/3)
23                {
24                    ans.push_back(nums[i]);
25                    mp[nums[i]] =-1;
26                }
27            }
28        }
29        return ans;
30    }
31};