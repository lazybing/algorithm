class Solution1{
    public:
        int getSum (int a, int b) {
            int carray = a ^ b;
            int c = a & b;

            while (c != 0) {
                c = (unsigned int)c << 1;
                int carray_prim = carray ^ c;
                c = carray & c;
                carray = carray_prim;
            }

            return carray;
        }
};


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
