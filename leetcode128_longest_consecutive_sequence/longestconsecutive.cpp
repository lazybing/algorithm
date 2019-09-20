class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (nums.size() == 0)
                return 0;

            int result = 1, tmp = 1;
            sort(nums.begin(), nums.end());

            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] != nums[i - 1]) {
                    if (nums[i] - nums[i - 1] == 1) {
                        tmp++;
                    } else {
                        result = max(result, tmp);
                        tmp = 1;
                    }
                }
            }

            return max(result, tmp);
        }
};
