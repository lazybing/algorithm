class Solution {
    puclic:
        bool containNearbyDuplicate(vector<int>& nums, int k) {
            unordered_map<int, int> mymap;
            for (int i = 0; i < nums.size(); i++) {
                if (mymap.count(nums[i]) == 0) {
                    mymap[nums[i]] = i;
                } else if (i - mymap[nums[i]]) {
                    return true;
                } else {
                    mymap[nums[i]] = i;
                }
            }

            return false;
        }
};
