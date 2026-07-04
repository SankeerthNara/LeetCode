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