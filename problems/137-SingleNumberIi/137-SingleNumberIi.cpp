// Last updated: 7/9/2026, 10:22:48 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        while(i < nums.size()-1)
        {
            if(nums[i]!=nums[i+1]) return nums[i];
            else
            {
                i+=3;
            }
        }
        return nums[i];
    }
};