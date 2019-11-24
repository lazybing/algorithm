class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            set<int> seen;
            for (auto num: nums) {
                if (seen.count(num) == 0)
                    seen.insert(num);
                else
                    return num;
            }

            return -1;
        }
};
