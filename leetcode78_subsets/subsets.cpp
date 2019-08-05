class Solution {
    private:
        void generatesubsets(vector<int>& nums, int i, vector<int>& combination, vector<vector<int>> &res) {
            res.push_back(combination);

            for (int j = i; j < nums.size(); j++) {
                combination.push_back(nums[j]);
                generatesubsets(nums, j + 1, combination, res);
                combination.pop_back();
            }
        }
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> res;
            vector<int> combination;

            generatesubsets(nums, 0, combination, res);

            return res;
        }
};
