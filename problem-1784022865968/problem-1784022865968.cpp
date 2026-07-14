// Last updated: 7/14/2026, 3:24:25 PM
1class Solution {
2public:
3    int hammingWeight(int n) {
4        int ans = 0;
5        while(n)
6        {
7            if(n%2) ans++;
8            n/=2;
9        }
10        return ans;
11    }
12};