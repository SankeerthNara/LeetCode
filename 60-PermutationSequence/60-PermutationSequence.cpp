// Last updated: 8/14/2026, 11:12:50 PM
1class Solution {
2public:
3    string getPermutation(int n, int k) {
4        vector<int> nums;
5
6        for (int i = 1; i <= n; i++)
7            nums.push_back(i);
8
9        string ans = "";
10
11        int fact = 1;
12
13        // (n-1)!
14        for (int i = 1; i < n; i++)
15            fact *= i;
16
17        k--; // 0-indexed
18
19        for (int i = n; i >= 1; i--) {
20            int index = k / fact;
21
22            ans += to_string(nums[index]);
23            nums.erase(nums.begin() + index);
24
25            k %= fact;
26
27            if (i > 1)
28                fact /= (i - 1);
29        }
30
31        return ans;
32    }
33};