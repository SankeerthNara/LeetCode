// Last updated: 7/9/2026, 10:23:10 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int ans = 0;

        for (int price : prices) {
            mn = min(mn, price);
            ans = max(ans, price - mn);
        }

        return ans;
    }
};