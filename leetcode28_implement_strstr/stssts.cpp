//Implement strStr()
//Return the index of the first occurrence of needle in haystack,
//or -1 if needle is not part of haystack

class Solution {
public:
    int strStr (string haystack, string needle) {
	if (needle == "")
	    return 0;
	return haystack.find(needle, 0);
    }
};
