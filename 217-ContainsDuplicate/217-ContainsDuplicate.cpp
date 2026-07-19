// Last updated: 7/19/2026, 10:57:16 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> k(nums.begin(),nums.end());
5        if(k.size()<nums.size()) return true;
6        else return false;
7    }
8};