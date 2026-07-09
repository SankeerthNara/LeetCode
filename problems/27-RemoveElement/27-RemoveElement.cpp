// Last updated: 7/9/2026, 10:25:44 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        int i = 0;
        vector<int> ans(k);
        int j = 0;
        while(i<nums.size())    
        {
            if(nums[i]!=val)
            {
                ans[j++] = nums[i++];
            }
            else
            {
                i++;
            }
        }
        for(int i = 0 ; i<j ; i++)
        {
            nums[i] = ans[i];
        }
        return j;
    }
};