class Solution {
    public:
        int countPrimeSetBits(int L, int R) {
            int retVal = 0;

            set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

            for (int i = L; i <= R; i++) {
                int num   = i;
                int count = 0;
                while (num > 0) {
                    count += (num & 0x1);
                    num >>= 1;
                }
                retVal += primes.count(count);
            }

            return retVal;
        }
};
