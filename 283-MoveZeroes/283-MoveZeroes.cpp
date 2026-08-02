// Last updated: 8/2/2026, 5:27:20 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_set <int> st;
5        for(int i : nums)
6        {
7            if(!st.count(i))
8            {
9                st.insert(i);
10            }
11            else return i;
12        }
13        return -1;
14    }
15};