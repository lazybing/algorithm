class Solution {
    public:
        vector<int> sortedSquares(vector<int>& A) {
            vector<int> res;
            
            for (auto i : A)
                res.push_back(i * i);

            sort(res.begin(), res.end());

            return res;
        }
};
