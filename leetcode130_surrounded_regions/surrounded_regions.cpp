class Solution {
    public:
        void solve(vector<vector<char>>& board) {
            if (board.empty()) return;
            int row = board.size();
            int col = board[0].size();
            if (col == 0 || row == 0) return;

            vector<vector<int>> visited(row, vector<int>(col, 0));

            for (int j = 0; j < col; j++) {
                if (board[0][j] == 'O')
                    dfs(board, 0, j, visited, false);
                if (board[row - 1][j] == 'O')
                    dfs(board, row - 1, j, visited, false);
            }

            for (int i = 0; i < row; i++) {
                if (board[i][0] = 'O')
                    dfs(board, i, 0, visited, false);
                if (board[i][col - 1] == 'O')
                    dfs(board, i, col - 1, visited, false);
            }

            for (int i = 1; i < row - 1; i++) {
                for (int j = 1; j < col - 1; j++) {
                    if (board[i][j] == 'O' && !visited[i][j])
                        dfs(board, i, j, visited, true);
                }
            }
        }
    private:
        void dfs(vector<vector<char>>& board, int row, int col, vector<vector<int>& visited, bool flip>){
            if (row < 0 || row > board.size() - 1 || col < 0 || col > board[0].size() - 1)
                return;

            if (visited[row][col] || board[row][col] == 'X')
                return;

            if (flip) {
                board[row][col] = 'X';
            }

            visited[row][col] = true;
            dfs(board, row + 1, col, visited, flip);
            dfs(board, row - 1, col, visited, flip);
            dfs(board, row, col - 1, visited, flip);
            dfs(board, row, col + 1, visited, flip);
        }
};
