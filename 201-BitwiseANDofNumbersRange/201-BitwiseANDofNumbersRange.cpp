// Last updated: 7/17/2026, 9:31:23 PM
1class Solution {
2public:
3    int rangeBitwiseAnd(int left, int right) {
4        while (left < right)
5            right &= (right - 1);
6
7        return right;
8    }
9};
10