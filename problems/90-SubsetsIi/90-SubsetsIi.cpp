// Last updated: 7/9/2026, 10:24:08 PM
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void solve(vector<int>& nums, int idx) {
        ans.push_back(curr);

        for (int i = idx; i < nums.size(); i++) {
            if (i > idx && nums[i] == nums[i - 1])
                continue;   // skip duplicate subsets

            curr.push_back(nums[i]);
            solve(nums, i + 1);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        solve(nums, 0);
        return ans;
    }
};