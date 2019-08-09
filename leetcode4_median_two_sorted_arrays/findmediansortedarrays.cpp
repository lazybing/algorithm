class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int size = nums1.size() + nums2.size();
            vector<int> comb(size);
            int idx1 = 0, idx2 = 0;

            for (int i = 0; i < comb.size(); i++) {
                if (idx1 != nums1.size() && idx2 != nums2.size()) {
                    if (nums1[idx1] < nums2[idx2]){
                        comb[i] = nums1[idx1++];
                    } else {
                        comb[i] = nums2[idx2++];
                    }
                } else if (idx1 == nums1.size() && idex2 != nums2.size()) {
                    comb[i] = nums2[idx2++];
                } else {
                    comb[i] = nums1[idx1++];   
                }
            }

            return (size % 2 != 0) ? double (comb[size / 2]) :
                double ((comb[size / 2] + comb[size / 2 - 1])) / 2.0;
        }
};
