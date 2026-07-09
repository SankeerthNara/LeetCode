// Last updated: 7/9/2026, 10:22:14 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] < nums[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }

        return l;
    }
};