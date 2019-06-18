class Solution {
    public:
        int maximumProduct(vector<int>& nums) {
            if (nums.size() < 3) return 0;

            sort(nums.begin(), nums.end());
            int size = nums.size();
            return max(nums[0] * nums[1] * nums[size - 1],
                       nums[size - 1] * nums[size - 2] * nums[size - 3]);
        }
};
