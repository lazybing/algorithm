//Given a sorted array and a target value
//return the index if the target is found.
//If not, return the index where it would be if it were inserted in order

class Solution{
public:
    int serachInsert(vector<int>& nums, int target) {
	int low = 0, high = nums.size();
	int mid = low + (high - low) / 2;

	while(low < high) {
	    if (nums[mid] == target)
		return mid;
	    else if (nums[mid] < target) 
		low = mid + 1;
	    else
		high = mid;

	    mid = low + (high - low) / 2;
	}

	return low;
    }
};
