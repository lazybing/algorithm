class Solution {
public:
    int hammingDistance(int x, int y){
	int tmp = x ^ y;

	int result = 0;
	while (tmp != 0) {
	    result += tmp & 0x1;
	    tmp >>= 1;
	}

	return result;
    }
};
