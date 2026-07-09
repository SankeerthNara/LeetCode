// Last updated: 7/9/2026, 10:22:12 PM
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2) return 0;
        sort(nums.begin(),nums.end());
        int ans = nums[1] - nums[0];
        for(int i =2 ; i < nums.size() ; i++)
        {
            ans = max(nums[i]-nums[i-1],ans);
        }
        return ans;   
    }
};