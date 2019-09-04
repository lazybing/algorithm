class Solution {
    public:
        int lengthOfLIS(vector<int>& nums) {
            if (nums.size() == 0)
                return 0;

            vector<int> res_arr(nums.size(), 1);
            int res = 1;

            for (int i = 1; i < nums.size(); i++) {
                for (int j = 0; j < i; j++) {
                    if (nums[j] < nums[i])
                        res_arr[i] = max(res_arr[j] + 1, res_arr[i]);
                }
                res = max(res, res_arr[i]);
            }

            return res;
        }
};
