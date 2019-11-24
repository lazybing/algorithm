class Solution {
    public:
        int totalHammingDistance(vector<int>& nums) {
            if (nums.size() < 2) return 0;
            int res = 0;

            for (int i = 0; i < 32; i++) {
                int setCount = 0;
                for (int j = 0; j < nums.size(); j++)
                    if (nums[j] & (1 << i)) setCount++;
                res += setCount * (nums.size() - setCount);
            }

            return res;
        }
};
