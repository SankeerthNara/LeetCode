// Last updated: 7/18/2026, 7:43:13 PM
1class Solution {
2public:
3    int nextNum(int n) {
4        int sum = 0;
5        while (n) {
6            int d = n % 10;
7            sum += d * d;
8            n /= 10;
9        }
10        return sum;
11    }
12
13    bool isHappy(int n) {
14        int slow = n;
15        int fast = nextNum(n);
16
17        while (fast != 1 && slow != fast) {
18            slow = nextNum(slow);
19            fast = nextNum(nextNum(fast));
20        }
21
22        return fast == 1;
23    }
24};