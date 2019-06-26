class Solution {
public:
    bool hasAlternatingBits (int n) {
	if ((n & 0x1) != ((n >> 1) & 0x1) && n >> 1 == 0)
	    return ture;
	if ((n & 0x1) == ((n >> 1) & 0x1))
	    return false;
	
	return hasAlternatingBits(n >> 1);
    }
};
