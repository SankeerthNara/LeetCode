// Last updated: 7/18/2026, 7:57:08 PM
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        int i = 0;
5        unordered_map <char,char> x;
6        unordered_map <char,char> y;
7        while(i < s.size())
8        {
9         if(!x.count(s[i]) &&!y.count(t[i]))
10         {
11            x[s[i]] = t[i];
12            y[t[i]] = s[i];
13         }
14         else if(x[s[i]] && y[t[i]] && x[s[i]] == t[i] && y[t[i]] == s[i]);
15         else return false;
16         i++;
17        }
18        return true;
19    }
20};