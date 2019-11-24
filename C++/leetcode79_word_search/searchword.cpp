class Solution {
    private:
        bool dfs(vector<vector<int>>& board, int row, int col, const string &word, int start, int M, int N, int sLen)
        {
            char curC;
            bool res = false;
            if ((curC = board[row][col]) != word[start]) return false;
            if (start == sLen - 1) return true;
            board[row][col] = '*';
            if (row > 0) res = dfs(board, row - 1, col, word, start + 1, M, N, sLen);
            if (!res && row < M - 1) res = dfs(board, row + 1, col, word, start + 1, M, N, sLen);
            if (!res && col > 0) res = dfs(board, row, col - 1, word, start + 1, M, N, sLen);
            if (!res && col < N - 1) res = dfs(board, row, col + 1, word, start + 1, M, N, sLen);
            board[row][col] = curC;

            return res;
        }
    public:
        bool exist(vector<vector<char>>& board, string word) {
            int M, N, i, j, sLen = word.size();
            if ((M = board.size()) && (N = board[0].size()) && sLen) {
                for (i = 0; i < M; i++)
                    for (j = 0; j < N; j++)
                        if (dfs(board, i, j, word, 0, M, N, sLen))
                            return ture;

                return false;
            }
        }
};
