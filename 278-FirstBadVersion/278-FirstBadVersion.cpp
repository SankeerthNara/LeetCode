// Last updated: 8/2/2026, 12:36:20 PM
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7        int l = 1;
8        int r = n;
9        while( l < r)
10        {
11            int mid = l+(r-l)/2;
12            if(isBadVersion(mid)) r = mid;
13            else l = mid+1; 
14        }
15        return l+(r-l)/2;
16    }
17};