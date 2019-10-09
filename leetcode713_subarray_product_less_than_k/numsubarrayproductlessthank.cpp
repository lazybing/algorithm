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

//tow pointer && slide window
class Solution {
    public:
        int numSubarrayProductLessThanK(vector<int>& nums, int k) {
            if (k <= 1 || nums.empty())
                return 0;

            int product = 1, res = 0, left = 0;

            for (int right = 0; right < nums.size(); right++) {
                product *= nums[right];
                while (product >= k) product /= nums[left++];
                res += right - left + 1;
            }

            return res;
        }
};
