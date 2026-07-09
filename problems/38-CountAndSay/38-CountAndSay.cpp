// Last updated: 7/9/2026, 10:25:28 PM
class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";

        for (int i = 2; i <= n; i++) {
            char prev = ans[0];
            string temp = "";
            int count = 1;

            for (int j = 1; j < ans.size(); j++) {
                if (ans[j] == prev) {
                    count++;
                } else {
                    temp += to_string(count);
                    temp += prev;

                    prev = ans[j];
                    count = 1;
                }
            }

            temp += to_string(count);
            temp += prev;

            ans = temp;
        }

        return ans;
    }
};