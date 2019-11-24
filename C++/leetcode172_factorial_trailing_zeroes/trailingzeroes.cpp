class Solution3 {
    public:
        int trailingZeroes (int n) {
            int count = 0, tmp = n;
            while ((tmp / 5) > 0){
                count += tmp / 5;
                tmp /= 5;
            }

            return count;
        }

};


class Solution2 {
    public:
        int trailingZeroes(int n) {
            int tmp = n;
            if (tmp < 5)
                return 0;

            return tmp / 5 + trailingZeroes(tmp / 5);
        }
};



class Solution1 {
    public:
        int trailingZeroes (int n) {
            if (n < 5)
                return 0;

            return n / 5 + trailingZeroes(n / 5);
        }
};
