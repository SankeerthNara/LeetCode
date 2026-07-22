// Last updated: 7/22/2026, 11:17:30 PM
1class Solution {
2public:
3    int addDigits(int num) {
4        while(num >= 10)
5        {
6            int t = 0;
7            while(num)
8            {
9                t+=num%10;
10                num/=10;
11            }
12            num = t;
13        }
14        return num;
15    } 
16};