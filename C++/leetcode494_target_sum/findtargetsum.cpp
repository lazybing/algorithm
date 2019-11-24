class Solution { 
    private:
        int find(int p, vector<int>&nums, long sum){
            if (p == nums.size())
                return sum == 0;
            return find(p + 1, nums, sum + nums[p]) + 
                find(p + 1, nums, sum - nums[p]);
        }
    public:
        int findTargetsumWays(vector<int>& nums, int S){
            return find(0, nums, S);
        }
};

class Solution {
    public:
        int findTargetsumWays(vector<int>& nums, int S) {
            int sum = accumulate(nums.begin(), nums.end(), 0);
            if (sum < S || (sum -S) % 2) return 0;
            int target = (sum - S) / 2;
            vector<int> dp(target + 1, 0);
            dp[0] = 1;
            for (int i = 0; i < nums.size(); i++) {
                for (int j = target; j >= nums[i]; j--)
                    dp[j] += dp[j - nums[i]];
            }

            return dp[target];
        }
};
