class Solution {
    public:
        int majorityElement (vector<int>& nums) {
            int index = 0;
            int count = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == nums[index])
                    count++;
                else {
                    count--;
                    if (count < 0) {
                        index = i;
                        count = 0;
                    }
                }
            }

            return nums[index];
        }
};
