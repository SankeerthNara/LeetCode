// Last updated: 7/9/2026, 10:26:15 PM
class Solution {
public:
    int reverse(int x) {
        long long q = 0;
        int sign = 0;
        long long p =x;
        if(x< 0)
        {
            p=-p;
            sign = 1;
        }
        while(p)
        {
            q = q*10 + (long long)p%10;
            p = p/10;
        }
        if(sign == 1)
        {
            q = -q;
        }
        int ans = q;
        if(ans == q)
        {
            return ans;
        }
        else return 0;
    }
};