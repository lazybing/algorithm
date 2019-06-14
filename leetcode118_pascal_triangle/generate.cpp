class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ret;
            ret.reserve(numRows);

            for (int i = 0; i < numRows; i++) {
                vector<int> row = {1};
                row.reserve(n + 1);
                for (int j = 0; j <= n; j++) {
                    row.push_back(row.back() * (n + 1 - j) / j);
                }
                ret.push_back(row);
            }

            return ret;
        }
};
