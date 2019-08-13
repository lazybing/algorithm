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

class Solution {
    public:
        vector<int> sortedSquares(vector<int>& A) {
            int size = A.size();
            vector<int> res(size, 0);
            int i = 0, j = size - 1;

            for (int k = size - 1; k >= 0; k--) {
                if (abs(A[i]) > abs(A[j]))
                    res[k] = pow(A[i++], 2);
                else
                    res[k] = pow(A[j--], 2);
            }

            return res;
        }
};
