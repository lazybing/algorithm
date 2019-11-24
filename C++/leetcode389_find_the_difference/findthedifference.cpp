class Solution {
public:
    char findTheDifference (string s, string t) {
	char ret = 0;

	for (int i = 0; i < s.size(); i++)
	    ret = ret ^ s[i];
	for (int i = 0; i < t.size(); i++)
	    ret = ret ^ t[i];

	return ret;
    }
};
