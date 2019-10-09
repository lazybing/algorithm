class Solution {
    public:
        int findPairs(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            int res = 0, right = 0;

            for (int left = 0; left < nums.size(); left++) {
                right = max(right, left + 1);

                while (right < nums.size() && abs(nums[right] - nums[left]) < k)
                    right++;

                if (right == nums.size())
                    break;

                if (nums[right] - nums[left] == k)
                    res++;

                //skip duplicates
                while (left < nums.size() - 1 && nums[left] == nums[left + 1])
                    left++;
            }

            return res;
        }
};
