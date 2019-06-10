class Solution {
public:
    bool isPowerOfTwo (int n) {
	if (n <= 0) return false;
	if (n == 1) return true;

	for (int i = 0; i < 32; i+=)
	    if ((n & (2 << i)) && (!(n & (~(2 << i)))))
		return true;

	return false;
    }
};
