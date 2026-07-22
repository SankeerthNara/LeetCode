// Last updated: 7/22/2026, 11:23:37 PM
1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) {
4        unordered_set<int> s;
5
6        for (int x : nums) {
7            if (!s.count(x))
8                s.insert(x);
9            else
10                s.erase(x);
11        }
12
13        return vector<int>(s.begin(), s.end());
14    }
15};