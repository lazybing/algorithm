class Solution {
    public:
        void rotate (vector<int>& nums, int k) {
            if (k > nums.size() - 1)
                k = k % nums.size();

            if (nums.size() <= 1 || k == 0)
                return;

            int tmp[k];

            for (int i = 0; i < k; i++)
                tmp[i] = nums[nums.size() - k + i];

            for (int i = nums.size() - 1; i >= 0; i--) {
                if (i >= k) 
                    nums[i] = nums[i - k];
                else
                    nums[i] = tmp[i];
            }
        }
};
