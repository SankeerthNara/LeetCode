// Last updated: 7/9/2026, 10:25:16 PM
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n , n+1);
        ans[0] = 0;
        for(int i = 0 ; i < n-1 ; i ++)
        {
            for(int j = i+1; j<= min(n-1,i+nums[i]); j++)
            {
                ans[j] = min(ans[j], ans[i]+1);
            }
        }
        return ans[n-1];
    }
    
};