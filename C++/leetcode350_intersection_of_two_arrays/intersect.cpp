class Solution {
    public:
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
            vector<int> res;
            unordered_map<int, int> ctr;

            for (int i = 0; i < nums2.size(); i++) {
                ctr[nums2[i]]++;
            }

            for (auto i : nums1) {
                if (ctr[i]-- > 0)
                    res.push_back(i);
            }

            return res;
        }
};
