// Last updated: 7/9/2026, 10:36:38 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set < int > ans(nums.begin(),nums.end());
        int k = ans.size();
        for(int i = 0; i< k ; i++)
        {
            auto it = ans.begin();
            advance(it,i);
            nums[i] = *it;
        }
        return k;
    }
};