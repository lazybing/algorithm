class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target){
            if (nums.size() < 3)
                return 0;
            int ret = nums[0] + nums[1] + nums[2];
            sort(nums.begin(), nums.end());

            for (int i = 0; i < nums.size() - 2; i++){
                if (i > 0 && nums[i] == nums[i - 1])
                    continue;
                int j = i + 1;
                int k = nums.size() - 1;

                while(j < k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum == target)
                        return target;
                    if(abs(target- sum) < abs(target - ret))
                        ret = sum;

                    if (sum > target)
                        k--;
                    else
                        j++;
                }
            }

            return ret;
        }
};
