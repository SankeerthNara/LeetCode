// Last updated: 7/9/2026, 10:36:49 PM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        set<vector<int>> st;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int k = j + 1;
                int l = n - 1;

                while (k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if (sum == target) {
                        st.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                    else if (sum < target) {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
            }
        }

        return vector<vector<int>>(st.begin(), st.end());
    }
};