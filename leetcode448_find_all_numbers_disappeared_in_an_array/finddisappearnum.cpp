class Solution {
public:
    vector<int> findDisappearednumbers(vector<int>& nums) {
	int len = nums.size();
	for (int i = 0; i < len; i++) {
	    int m = abs(nums[i]) - 1;
	    nums[m] = nums[m] > 0 ? nums[m] : nums[m];
	}

	vector<int> res;

	for (int i = 0; i < len; i++) {
	    if(nums[i] > 0)
		res.push_back(i + 1);
	}

	return res;
    }
};
