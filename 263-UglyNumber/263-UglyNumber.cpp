// Last updated: 8/2/2026, 11:26:51 AM
1class Solution {
2public:
3    bool isUgly(int n) {
4        if(!n) return false;
5        while(n%2 == 0)
6        {
7            n/=2;
8        }
9        while(n%3 == 0)
10        {
11            n/=3;
12        }
13        while(n%5 == 0)
14        {
15            n/=5;
16        }
17        if(n == 1) return true;
18        return false;
19    }
20};