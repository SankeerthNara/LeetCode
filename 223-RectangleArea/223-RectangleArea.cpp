// Last updated: 7/20/2026, 8:45:20 PM
1class Solution {
2public:
3    int computeArea(int ax1, int ay1, int ax2, int ay2,
4                    int bx1, int by1, int bx2, int by2) {
5
6        int areaA = (ax2 - ax1) * (ay2 - ay1);
7        int areaB = (bx2 - bx1) * (by2 - by1);
8
9        int overlapWidth = max(0, min(ax2, bx2) - max(ax1, bx1));
10        int overlapHeight = max(0, min(ay2, by2) - max(ay1, by1));
11
12        int overlap = overlapWidth * overlapHeight;
13
14        return areaA + areaB - overlap;
15    }
16};