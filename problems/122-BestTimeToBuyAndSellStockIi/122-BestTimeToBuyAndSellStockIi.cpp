// Last updated: 7/9/2026, 10:23:08 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1])
                ans += prices[i] - prices[i - 1];
        }
        return ans;
    }
};