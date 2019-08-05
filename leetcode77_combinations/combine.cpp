class Solution {
    private:
        void combine(vector<vector<int>>& res, vector<int>& combination, int n, int m, int k) {
            if (k == 0) {
                res.push_back(combination);
                return;
            }

            for (int i = m; i <= n - k + 1; i++){
                combination.push_back(i);
                combine(res, combination, n, i + 1, k - 1);
                combination.pop_back();
            }
        }
    public:
        vector<vector<int>> combine(int n, int k) {
            vector<vector<int>> res;
            vector<int> combination;
            if (k > n)
                return res;

            combin(res, combination, n, 1, k);

            return res;
        }
};
