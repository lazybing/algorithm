class Solution {
    public:
        int minPathSum(vector<vector<int>>& grid) {
            int res = 0, row = grid.size(), col = grid[0].size();
            vector<vector<unsigned int>> dp(row, vector<unsigned int>(col, 0));
            dp[0][0] = grid[0][0];

            for (int i = 1; i < row; i++)
                dp[i][0] = grid[i][0] + dp[i - 1][0];
            for (int j = 1; j < col; j++)
                dp[0][j] = grid[0][j] + dp[0][j - 1];

            for (int i = 1; i < row; i++)
                for (int j = 1; j < col; j++)
                    dp[i][j] = min(dp[i - 1][j] + grid[i][j], dp[i][j - 1] + grid[i][j]);

            return dp[row - 1][col - 1];
        }
};
