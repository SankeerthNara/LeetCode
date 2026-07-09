// Last updated: 7/9/2026, 10:33:15 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int previ = nums[0];
        int preva = nums[0];
        int ans = nums[0];
        for(int i = 1 ; i < nums.size() ; i++)
        {
            int curra = max(nums[i],previ*nums[i]);
            curra = max(curra,preva*nums[i]);
            int curri = min(nums[i],previ*nums[i]);
            curri = min(curri,preva*nums[i]);
            ans = max(ans,curra);
            previ = curri;
            preva = curra;
        }
        return ans;
    }
};