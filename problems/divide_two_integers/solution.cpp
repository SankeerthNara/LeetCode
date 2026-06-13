class Solution {
public:
    int divide(int dividend, int divisor) {
         long long ans = (long long)dividend/divisor;
        if(ans>INT_MAX)ans = INT_MAX;
        int k = ans;
        return k;

    }
};