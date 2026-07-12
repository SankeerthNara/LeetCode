// Last updated: 7/12/2026, 9:15:53 PM
1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        string ans = "";
5        while(columnNumber)
6        {
7            int k = columnNumber%26;
8            if(!k)
9            {
10                k = 26;
11                columnNumber-=26;
12            }
13            ans+= (char)(k+'A'-1);
14            columnNumber/=26;
15        }
16        reverse(ans.begin(),ans.end());
17        return ans;
18    }
19};