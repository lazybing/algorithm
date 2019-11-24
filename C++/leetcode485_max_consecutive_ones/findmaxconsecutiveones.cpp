class Solution {
public:
    int findMaxConsecutiveOnes (vector<int>& nums) {
	int maxcnt = 0;
	int cnt = 0;

	for (int i = 0; i < nums.size(); i++) {
	    if (nums[i]) cnt++;
	    else{
		maxcnt = max(maxcnt, cnt);
		cnt = 0;
	    }
	}

	return max(cnt, maxcnt);
    }
};
