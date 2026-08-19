// Last updated: 8/19/2026, 2:48:01 PM
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        if (n <= 0) return false;
5
6        while (n % 3 == 0) {
7            n /= 3;
8        }
9
10        return n == 1;
11    }
12};