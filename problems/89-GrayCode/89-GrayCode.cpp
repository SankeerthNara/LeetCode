// Last updated: 7/9/2026, 10:24:09 PM
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;

        for (int i = 0; i < (1 << n); i++) {
            ans.push_back(i ^ (i >> 1));
        }

        return ans;
    }
};