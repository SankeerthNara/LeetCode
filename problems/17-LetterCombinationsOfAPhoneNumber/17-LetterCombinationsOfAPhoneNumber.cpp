// Last updated: 7/9/2026, 10:25:59 PM
class Solution {
public:
    vector<string> ans;

    void solve(string digits, int index, string current,
               vector<string>& mp) {
        
        // Base case
        if(index == digits.size()) {
            ans.push_back(current);
            return;
        }

        string letters = mp[digits[index] - '0'];

        for(char ch : letters) {
            solve(digits, index + 1, current + ch, mp);
        }
    }

    vector<string> letterCombinations(string digits) {
        
        if(digits.empty()) return {};

        vector<string> mp(10);

        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";

        solve(digits, 0, "", mp);

        return ans;
    }
};