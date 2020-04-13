class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        int res = 0, clen = 0;

        for (int i = 0; i < A.size(); i++) {
            if (i >= 2 &&
                ((A[i - 2] > A[i - 1] && A[i - 1] < A[i]) || (A[i - 2] < A[i -1] && A[i - 1] > A[i]))) {
                clen++;
            } else if (i >= 1 && A[i - 1] != A[i]) {
                clen = 2;
            } else {
                clen = 1;
            }
            res = max(res, clen);
        }
        return res;
    }
};
