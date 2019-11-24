class Solution {
    public:
        int minSubArrayLen(int s, vector<int>& nums) {
            int left = 0, right = 0, size = nums.size(), sum = 0, len = INT_MAX;
            while (right < size) {
                sum += nums[right++];
                while (sum >= s) {
                    len = min(len, right - left);
                    sum -= nums[left++];
                }
            }

            return len == INT_MAX ? 0 : len;
        }
};
