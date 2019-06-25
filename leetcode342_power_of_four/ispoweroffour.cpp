class Solution {
    public:
        bool isPowerOfFour (int num) {
            if (num <= 0) return false;

            if ((num & (num - 1)) != 0) return false;
            if (num & 0x55555555) return true;

            return false;
        }
};
