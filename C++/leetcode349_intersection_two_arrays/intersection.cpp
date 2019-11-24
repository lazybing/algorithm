class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            set<int> s(nums1.begin(), nums1.end());

            vector<int> ret;
            for (int x: nums2)
                if (s.erase(x))
                    ret.push_back(x);

            return ret;
        }
};
