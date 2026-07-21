// Last updated: 7/21/2026, 8:16:14 PM
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        if(nums.size() == 0) return {};
5        int start = 0;
6        vector<string> ans;
7        for(int i = 1 ; i < nums.size() ; i++)
8        {
9            if(nums[i] == nums[i-1]+1)continue;
10            else
11            {
12                if(start == i-1)ans.push_back(to_string(nums[start]));
13                else
14                {
15                    ans.push_back(to_string(nums[start]) + "->" + to_string(nums[i-1]));
16                }
17                start = i;
18            }
19        }
20        if(start!=nums.size()-1)
21        {
22            ans.push_back(to_string(nums[start])+"->"+to_string(nums[nums.size()-1]));
23        }
24        else
25        {
26            ans.push_back(to_string(nums[nums.size()-1]));
27        }
28        return ans;
29    }
30};