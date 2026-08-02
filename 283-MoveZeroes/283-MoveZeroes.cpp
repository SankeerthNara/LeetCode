// Last updated: 8/2/2026, 5:56:51 PM
1class Solution {
2public:
3    void gameOfLife(vector<vector<int>>& board) {
4        int n = board.size();
5        int m = board[0].size();
6
7        int dx[8] = {-1,-1,-1,0,0,1,1,1};
8        int dy[8] = {-1,0,1,-1,1,-1,0,1};
9
10        for(int i = 0; i < n; i++) {
11            for(int j = 0; j < m; j++) {
12
13                int live = 0;
14
15                for(int k = 0; k < 8; k++) {
16                    int ni = i + dx[k];
17                    int nj = j + dy[k];
18
19                    if(ni >= 0 && ni < n && nj >= 0 && nj < m) {
20                        if(board[ni][nj] == 1 || board[ni][nj] == 3)
21                            live++;
22                    }
23                }
24
25                if(board[i][j] == 1) {
26                    if(live < 2 || live > 3)
27                        board[i][j] = 3;      // alive -> dead
28                }
29                else {
30                    if(live == 3)
31                        board[i][j] = 2;      // dead -> alive
32                }
33            }
34        }
35
36        // Finalize the board
37        for(int i = 0; i < n; i++) {
38            for(int j = 0; j < m; j++) {
39                if(board[i][j] == 2)
40                    board[i][j] = 1;
41                else if(board[i][j] == 3)
42                    board[i][j] = 0;
43            }
44        }
45    }
46};