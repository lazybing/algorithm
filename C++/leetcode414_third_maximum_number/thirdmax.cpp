class Solution {
    public:
        int thirdMax (vector<int>& nums) {
            long long first  = LLONG_MIN;
            long long second = LLONG_MIN;
            long long third  = LLONG_MIN;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > third && nums[i] < second)
                    third = nums[i];
                if (nums[i] > second && nums[i] < first) {
                    third = second;
                    second = nums[i];
                }

                if (nums[i] > first) {
                    third = second;
                    second = first;
                    first = nums[i];
                }
            }

            return (LLONG_MIN == third) ? first : third;
        }
};
