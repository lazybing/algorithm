class Solution {
    public:
        int rangeBitwiseAnd(int m, int n) {
            int ret;
            if (n > m)
                ret = rangeBitwiseAnd(m >> 1, n >> 1) << 1;
            else
                ret = m;

            return ret;
        }
};
