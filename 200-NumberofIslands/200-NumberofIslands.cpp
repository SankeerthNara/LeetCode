// Last updated: 7/17/2026, 9:16:19 PM
1class Solution {
2public:
3    int m, n;
4
5    void dfs(vector<vector<char>>& grid, int i, int j) {
6        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
7            return;
8
9        grid[i][j] = '0';  // Mark as visited
10
11        dfs(grid, i + 1, j);
12        dfs(grid, i - 1, j);
13        dfs(grid, i, j + 1);
14        dfs(grid, i, j - 1);
15    }
16
17    int numIslands(vector<vector<char>>& grid) {
18        m = grid.size();
19        n = grid[0].size();
20
21        int islands = 0;
22
23        for (int i = 0; i < m; i++) {
24            for (int j = 0; j < n; j++) {
25                if (grid[i][j] == '1') {
26                    islands++;
27                    dfs(grid, i, j);
28                }
29            }
30        }
31
32        return islands;
33    }
34};