// Last updated: 7/14/2026, 3:23:13 PM
1class Solution {
2public:
3    int reverseBits(int n) {
4        string k = "";
5        while(n)
6        {
7            if(n%2) k+="1";
8            else k+="0";
9            n/=2;
10        }
11        while(k.size()!=32) k+="0";
12        int ans = 0;
13       for(char c : k)
14{
15    ans = ans * 2 + (c - '0');
16}
17        return ans;
18    }
19};