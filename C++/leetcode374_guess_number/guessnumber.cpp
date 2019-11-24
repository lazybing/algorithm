int guess(int num);

class Solution {
    public:
        int guessNumber(int n) {
            int lower = 1, high = n, mid;
            int retflag;

            while (lower < high) {
                mid = lower + (high - lower) / 2;
                retflag = guess(mid);

                if (retflag == 1)
                    lower = mid + 1;
                else if (reflag == -1)
                    high = mid - 1;
                else
                    return mid;
            }

            return lower;
        }
}
