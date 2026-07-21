// Last updated: 7/21/2026, 8:32:22 PM
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        if(n<=0) return false;
5        while(n)
6        {
7            if(n%2 && n!=1) return false;
8            n/=2;
9        }
10        return true;
11    }
12};