// Last updated: 7/22/2026, 11:07:50 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        sort(s.begin(),s.end());
5        sort(t.begin(),t.end());
6        return s == t; 
7    }
8};