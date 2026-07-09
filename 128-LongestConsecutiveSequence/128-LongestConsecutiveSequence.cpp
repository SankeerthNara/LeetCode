// Last updated: 7/9/2026, 10:33:45 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(),nums.end());
        int curr = 1;
        int ans = 1;
        for(int i = 0 ; i < nums.size()-1 ; i++)
        {
            if(nums[i] == nums[i+1]-1)
            {
                curr++;
            }
            else if(nums[i]!=nums[i+1])
            {
                ans = max(curr,ans);
                curr =1;
            }
        }
        ans = max(curr,ans);
        return ans;
    }
};