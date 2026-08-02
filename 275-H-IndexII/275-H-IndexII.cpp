// Last updated: 8/2/2026, 12:32:00 PM
1class Solution {
2public:
3    int hIndex(vector<int>& citations) {
4        reverse(citations.begin(),citations.end());
5        int n = citations.size();
6        for(int i = 0 ; i < n ; i ++)
7        {
8            if( i+1 > citations[i]) return i;
9        }
10        return n;
11    }
12};