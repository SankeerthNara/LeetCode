int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize) {
    if (obstacleGridSize == 0) return 0;
    int m = obstacleGridSize;
    int n = obstacleGridColSize[0];

    // If start or end is blocked, no paths.
    if (obstacleGrid[0][0] == 1) return 0;
    if (obstacleGrid[m-1][n-1] == 1) return 0;

    // Use long long internally to avoid overflow for intermediate sums.
    long long dp[m][n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            dp[i][j] = 0;                // assignment, not comparison
            if (obstacleGrid[i][j] == 1) {
                dp[i][j] = 0;           // obstacle -> 0 ways
            } else {
                if (i == 0 && j == 0) {
                    dp[i][j] = 1;       // start cell (we already verified it's not an obstacle)
                } else {
                    long long ways = 0;
                    if (i > 0) ways += dp[i-1][j];
                    if (j > 0) ways += dp[i][j-1];
                    dp[i][j] = ways;
                }
            }
        }
    }

    return dp[m-1][n-1];
}