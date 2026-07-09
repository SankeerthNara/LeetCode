// Last updated: 7/9/2026, 10:34:53 PM
class Solution {
public:
    vector<string> ans;

    bool valid(string part) {
        if(part.size() > 1 && part[0] == '0')
            return false;

        int num = stoi(part);

        return num >= 0 && num <= 255;
    }

    void backtrack(string& s, int idx,
                   vector<string>& curr) {

        if(curr.size() == 4) {
            if(idx == s.size()) {
                ans.push_back(
                    curr[0] + "." +
                    curr[1] + "." +
                    curr[2] + "." +
                    curr[3]
                );
            }
            return;
        }

        for(int len = 1; len <= 3; len++) {

            if(idx + len > s.size())
                break;

            string part = s.substr(idx, len);

            if(valid(part)) {
                curr.push_back(part);
                backtrack(s, idx + len, curr);
                curr.pop_back();
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {

        vector<string> curr;
        backtrack(s, 0, curr);

        return ans;
    }
};