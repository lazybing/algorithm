class Solution{
    private:
        void combinationSum(vector<int>&candidates, int target, vector<vector<int>>&res, vector<int>&combination, int begin){
            if (!target) {
                res.push_back(combination);
                return;
            }

            for (int i = begin; i != candidates.size(); i++){
                combination.push_back(candidates[i]); 
                combinationSum(candidates, target - candidates[i], res, combination, i);
                combination.pop_back();
            }
        }
    public:
        vector<vector<int>> combinationSum(vector<int>& candidates, int target){
            vector<vector<int>> res;
            sort(candidates.begin(),candidates.end());
            vector<int> combination;
            combinationSum(candidates, target, res, combination, 0);
            return res;
        }
};
