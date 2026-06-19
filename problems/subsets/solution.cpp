class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;
    void vatta (vector<int>&nums,int n,int idx)
    {
        if(idx >= n)
        {
            ans.push_back(curr);
            return;
        }
        vatta(nums,n,idx+1);
        curr.push_back(nums[idx]);
        vatta(nums,n,idx+1);
        curr.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vatta(nums,n,0);
        // sort(ans.begin(),ans.end());
        return ans;
    }
};