//n^2 = n * (2n-1) / 2;
class Solution {
    public:
        bool isPerfectSquare(int num) {
            int i = 0;

            for (int i = 1; num > 0; i+=2)
                num -= i;

            return num == 0;
        }
}
