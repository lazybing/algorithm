class Solution {
    private:
        void permute(vector<int>& nums, vector<vector<int>>& res, set<int>& used, vector<int>& combine) {
            if (nums.size() == used.size()) {
                res.push_back(combine);
                return;
            }

            for (int i = 0; i < nums.size(); i++) {
                if (used.find(nums[i]) != used.edn()) continue;

                combine.push_back(nums[i]);
                used.insert(nums[i]);
                permute(nums, res, used, combine);
                used.erase(nums[i]);
                combine.pop_back();
            }
        }
    public:
        vector<vector<int>> permute(vector<int> & nums) {
            vector<vector<int>> res;
            vector<int> combine;
            set<int> used;

            if (nums.size() == 0)
                return res;

            permute(nums, res, used, combine);

            return res;
        }
};
