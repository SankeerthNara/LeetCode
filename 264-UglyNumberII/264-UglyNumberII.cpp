// Last updated: 8/2/2026, 12:09:27 PM
1class Solution {
2public:
3    int nthUglyNumber(int n) {
4        set<long long> s;
5        s.insert(1);
6
7        auto it = s.begin();
8
9        for (int i = 0; i < n - 1; i++) {
10            long long x = *it;
11            s.insert(x * 2);
12            s.insert(x * 3);
13            s.insert(x * 5);
14            ++it;
15        }
16
17        return (int)(*it);
18    }
19};