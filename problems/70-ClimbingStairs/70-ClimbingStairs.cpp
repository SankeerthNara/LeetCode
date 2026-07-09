// Last updated: 7/9/2026, 10:24:39 PM
class Solution {
public:
    int climbStairs(int n) {
        if(n == 0) return 0;
        int one = 1;
        int two = 1;
        int i = 1;
        while(i<n)
        {
            int t = two;
            two = one+two;
            one = t;
            i++;
        }
        return two;
    }
};