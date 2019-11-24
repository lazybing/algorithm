class Solution{
    public:
        vector<int> getRow(int rowIndex) {
            if (rowIndex == 0)
                return vector<int>(1, 1);

            vector<int> ret(rowIndex + 1, 0);

            ret[0] = ret[1] = 1;

            int i, j;
            for (i = 2; i <= rowIndex; i++) {
                ret[i] = 1;
                for (j = i - 1; j > 0; j--)
                    ret[j] += ret[j - 1];
            }

            return ret;
        }
};
