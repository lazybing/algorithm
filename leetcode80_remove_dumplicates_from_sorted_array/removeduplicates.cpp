class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if (nums.size() <= 2) return nums.size();
            int slow = 0, fast = 0;

            for (slow = 0, fast = 2; fast < nums.size();) {
                if (nums[slow] == nums[slow + 1]) {
                    if (nums[slow] == nums[fast])
                        fast++;
                    else {
                        nums[slow + 2] = nums[fast];
                        slow++;
                        fast++;
                    }
                } else {
                    nums[slow + 2] = nums[fast];
                    fast++;
                    slow++;
                }
            }

            return slow + 2;
        }
};
