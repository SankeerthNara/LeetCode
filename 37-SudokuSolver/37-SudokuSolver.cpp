// Last updated: 8/12/2026, 10:46:48 PM
1class Solution {
2public:
3    bool isValid(vector<vector<char>>& board, int r, int c, char ch) {
4        for (int i = 0; i < 9; i++) {
5            // Row
6            if (board[r][i] == ch)
7                return false;
8
9            // Column
10            if (board[i][c] == ch)
11                return false;
12
13            // 3x3 box
14            int nr = 3 * (r / 3) + i / 3;
15            int nc = 3 * (c / 3) + i % 3;
16
17            if (board[nr][nc] == ch)
18                return false;
19        }
20
21        return true;
22    }
23
24    bool solve(vector<vector<char>>& board) {
25        for (int r = 0; r < 9; r++) {
26            for (int c = 0; c < 9; c++) {
27
28                if (board[r][c] == '.') {
29
30                    for (char ch = '1'; ch <= '9'; ch++) {
31
32                        if (isValid(board, r, c, ch)) {
33                            board[r][c] = ch;
34
35                            if (solve(board))
36                                return true;
37
38                            // Backtrack
39                            board[r][c] = '.';
40                        }
41                    }
42
43                    // No digit works
44                    return false;
45                }
46            }
47        }
48
49        return true;
50    }
51
52    void solveSudoku(vector<vector<char>>& board) {
53        solve(board);
54    }
55};