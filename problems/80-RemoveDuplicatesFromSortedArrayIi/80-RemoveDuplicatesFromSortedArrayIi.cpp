// Last updated: 7/9/2026, 10:24:17 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size()) return 0;
        vector<int> ans;
        int k = 0;
        ans.push_back(nums[0]);
        k++;
        int count = 1;
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(nums[i] == nums[i-1] && count == 1)
            {
                ans.push_back(nums[i]);
                k++;
                count++;
            }
            else if(nums[i]!=nums[i-1])
            {
                ans.push_back(nums[i]);
                k++;
                count = 1;
            }
        }
        for(int i = k-1 ; i >=0 ; i --)
        {
            nums[i] = ans.back();
            ans.pop_back();
        }
        return k;
    }
};