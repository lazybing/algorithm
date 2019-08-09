class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int zero = 0;
            int one = 0;
            int two = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) zero++;
                else if (nums[i] == 1) one++;
                else if (nums[i] == 2) two++;
            }

            for (int i = 0; i < nums.size(); i++) {
                if (i < zero) nums[i] = 0;
                else if (i >= zero && i < zero + one) nums[i] = 1;
                else nums[i] = 2;
            }
        }
};
