class Solution {
public:
    uint32_t reverseBits (uint32_t n) {
	uint32_t ret = 0;

	for (int i = 0; i < 32; i++) {
	    ret = ret << 1;

	    if (n % 2 == 1)
		ret++;

	    n = n >> 1;
	}

	return ret;
    }
};
