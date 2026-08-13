// Last updated: 8/13/2026, 9:35:13 PM
1class Solution {
2public:
3    vector<vector<string>> ans;
4
5    bool isSafe(vector<string>& board, int row, int col, int n) {
6
7        // Check column
8        for (int i = 0; i < row; i++) {
9            if (board[i][col] == 'Q')
10                return false;
11        }
12
13        // Check upper-left diagonal
14        for (int i = row - 1, j = col - 1;
15             i >= 0 && j >= 0;
16             i--, j--) {
17
18            if (board[i][j] == 'Q')
19                return false;
20        }
21
22        // Check upper-right diagonal
23        for (int i = row - 1, j = col + 1;
24             i >= 0 && j < n;
25             i--, j++) {
26
27            if (board[i][j] == 'Q')
28                return false;
29        }
30
31        return true;
32    }
33
34    void solve(vector<string>& board, int row, int n) {
35
36        // All queens placed
37        if (row == n) {
38            ans.push_back(board);
39            return;
40        }
41
42        for (int col = 0; col < n; col++) {
43
44            if (isSafe(board, row, col, n)) {
45
46                // Choose
47                board[row][col] = 'Q';
48
49                // Explore
50                solve(board, row + 1, n);
51
52                // Undo
53                board[row][col] = '.';
54            }
55        }
56    }
57
58    vector<vector<string>> solveNQueens(int n) {
59
60        vector<string> board(n, string(n, '.'));
61
62        solve(board, 0, n);
63
64        return ans;
65    }
66};