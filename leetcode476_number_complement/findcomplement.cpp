class Solution {
public:
    int findComplement(int num) {
	int retVal = 0;
	int time   = 0;

	while (num != 0) {
	    retVal |= !(num & 0x1) << time;
	    num >>= 1;
	    time++;
	}

	return retVal;
    }
};
