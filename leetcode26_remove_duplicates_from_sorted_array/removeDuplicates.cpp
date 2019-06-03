//Given a sorted array nums, remove the duplicates in-place
//such that each element appear only once and return the new length

class Solution {
    public:
        int removeDuplicates(vector<int> &nums) {
            int i, j = 0;
            
            if (nums.size() == 0)
                return 0;

            for (i = 0; i < nums.size(); i++) {
                if (nums[i] > nums[j]) 
                    nums[++j] = nums[i];
            }

            return j+1;
        }
};
