// Last updated: 8/12/2026, 10:37:28 PM
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        int n = nums.size();
5        vector<bool> seen(n + 1, false);  // Array for lookup
6
7        // Mark the elements from nums in the lookup array
8        for (int num : nums) {
9            if (num > 0 && num <= n) {
10                seen[num] = true;
11            }
12        }
13
14        // Iterate through integers 1 to n
15        // return smallest missing positive integer
16        for (int i = 1; i <= n; i++) {
17            if (!seen[i]) {
18                return i;
19            }
20        }
21
22        // If seen contains all elements 1 to n
23        // the smallest missing positive number is n + 1
24        return n + 1;
25    }
26};