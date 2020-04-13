class Solution {
    public:
        vector<double> medianSlidingWindow(vector<int>& nums, int k) {
            vector<double> res;

            multset<long long > mulset;

            for (int i = 0; i < k - 1; i++)
                mulset.insert(nums[i]);

            for (int i = k - 1; i < nums.size(); i++) {
                mulset.insert(nums[i]); 
                vector<long long> tmp(mulset.begin(), mulset.end());

                if (k % 2 == 0)
                    res.push_back((tmp[k / 2] + tmp[k / 2 - 1]) / 2.0);
                else
                    res.push_back(tmp[k / 2]);

                mulset.erase(mulset.find(nums[i - k + 1]));
            }

            return res;
        }
};
