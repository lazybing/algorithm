class Solution {
    public:
        int mySqrt(int x) {
            if (x == 0)
                return 0;

            int low = 1, high = 46340;
            int mid = low + (high - low) / 2;

            while (low < high) {
                if (mid * mid <= x && (mid + 1) * (mid + 1) > x)
                    return mid;

                if (mid * mid > x)
                    high = mid - 1;

                if (mid * mid < x)
                    low = mid + 1;

                mid = low + (high - low) / 2;
            }

            return mid;
        }
};
