class Solution {
public:
    bool isPowerOfThree(int n) {
	if (n <= 0 || n == 2) return false;

	int tmp = n;
	while (tmp >= 3) {
	    if (tmp % 3 != 0)
		return false;
	    tmp = tmp / 3;
	}

	return (tmp == 1);
    }
};
