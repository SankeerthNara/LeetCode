// Last updated: 7/9/2026, 10:36:19 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = nums.size();
        int r = -1;
        for(int i = 0 ;i < nums.size() ; i++ )
        {
            if(nums[i] == target)
            {
                l = min(l,i);
                r = max(r,i);
            }
        }
        if(l == nums.size())
        {
            l = -1;
        }
        return {l,r};
    }

};