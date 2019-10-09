//time limited solution
class Solution {
    public:
        int numSubarrayProductLessThanK(vector<int>& nums, int k) {
            if (k == 0 || nums.empty())
                return 0;

            int res = 0;
            long long product = nums[0];
            for (int left = 0; left < nums.size(); left++) {
                product = nums[left];
                for (int right = left; right < nums.size();) {
                    if (product < k) {
                        res++;
                        right++;
                        if (right == nums.size())
                            break;
                        product *= nums[right];
                    } else {
                        break;
                    }
                }
            }

            return res;
        }
};
