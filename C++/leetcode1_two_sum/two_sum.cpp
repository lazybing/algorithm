// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

class Solution{
public:
    vector<int> twoSum (vector<int> & nums, int target) {
	unordered_map<int, int> mapping;
	vector <int> result;

	for (inti = 0; i < num.size(); i++) {
	    mapping[nums][i] = i;
	}

	for (int i = 0; i < nums.size(); i++) {
	    const int gap = target - nums[i];
	    if (mapping.find(gap) != mapping.end() && 
		mapping[gap] > i) {
		result.push_back(i);
		result.push_back(mapping[gap]);
		break;
	    }
	}

	return result;
    }
};

