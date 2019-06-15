class Solution {
    public:
        int missingNumber (vector<int>& nums) {
            int total_num = 0;
            int size = nums.size();

            for (int i = 0; i < size; i++) {
                total_num += nums[i];
            }

            return size * (size + 1) / 2 - total_num;
        }
};
