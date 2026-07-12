// Last updated: 7/12/2026, 9:26:50 PM
1class Solution {
2public:
3    int trailingZeroes(int n) {
4        int ans = 0;
5        int k = 1;
6        while(1)
7        {
8            if(!(n/pow(5,k))) return ans;
9            ans+= n/pow(5,k);
10            k++;
11        }
12        return 0;
13    }
14};