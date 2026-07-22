// Last updated: 7/22/2026, 10:39:00 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int zero = 0;
5        int ans = 1;
6        vector<int> p;
7        for(int k : nums)
8        {
9            if(k == 0)
10            {
11                zero++;
12            }
13            else
14            {
15                ans*=k;
16            }
17        }
18        for(int k : nums)
19        {
20            if(zero > 1)
21            {
22                p.push_back(0);
23            }
24            else if( zero == 1 )
25            {
26                if(!k) p.push_back(ans);
27                else p.push_back(0);
28            }
29            else
30            {
31                p.push_back(ans/k);
32            }
33        }
34        return p;
35    }
36};