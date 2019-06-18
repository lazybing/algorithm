class Solution{
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            int ret = 0;
            int max_total = 0;
            for (int i = 0; i < k; i++) {
                max_total += nums[i];
            }

            ret = max_total;
            for (int i = k; i < nums.size(); i++) {
                max_total += nums[i] - nums[i - k];
                ret = max(max_total, ret);
            }

            return (double)ret / k;
        }
};
