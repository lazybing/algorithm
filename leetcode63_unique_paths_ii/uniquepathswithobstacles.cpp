class Solution {
    public:
        int uniquePahtsWithObstacles(vector<vector<int>>& obstacleGrid) {
            // be care about the dp type should be unsigned int not int
            int row = obstacleGrid.size();
            int col = obstacleGrid[0].size();
            vector<vector<unsigned int>> dp(row + 1, vector<unsigned int>(col + 1, 0));

            dp[0][1] = 1;

            for (int i = 1; i <= row; i++)
                for (int j = 1; j <= col; j++)
                    if (!obstacleGrid[i - 1][j - 1])
                        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

            return dp[row][col];
        }
};
