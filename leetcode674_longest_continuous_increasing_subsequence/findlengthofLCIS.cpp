class Solution {
    public:
        int findLengthOfLCIS(vector<int>& nums) {
            if(nums.size() == 0)
                return 0;

            int retlen = 1, tmp = 1;
            for (int i = 1; i < nums.size(); i++){
                if (nums[i] > nums[i - 1])
                    tmp++;
                else
                    tmp = 1;

                if (tmp > retlen)
                    retlen = tmp;
            }
            return retlen;
        }
};
