// Last updated: 8/2/2026, 12:29:24 PM
1class Solution {
2public:
3    int hIndex(vector<int>& citations) {
4        sort(citations.begin(), citations.end(), greater<int>());
5
6        int n = citations.size();
7
8        for (int i = 0; i < n; i++) {
9            if (citations[i] < i + 1)
10                return i;
11        }
12
13        return n;
14    }
15};