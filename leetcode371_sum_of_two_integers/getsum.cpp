class Solution {
    public:
        int getSum(int a, int b) {
            int sum;
            while(b) {
                sum = a^b;
                int carray = (a&b) << 1;
                a = sum;
                b = carray;
            }
            return sum;
        }
};
