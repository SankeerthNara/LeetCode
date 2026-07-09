// Last updated: 7/9/2026, 10:22:50 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(),nums.end());
        while( i < nums.size()-1)
        {
            if(nums[i]!=nums[i+1]) return nums[i];
            else
            {
                while(i < nums.size() && nums[i] == nums[i+1]) i++;
                i++;
            }
        }
        return nums[i];
    }
};