class Solution{
    int countSegments(string s) {
	int ret = 0;
	s.push_back(' ');
	for (int i = 1; i < s.size(); ++i)
	    if (s[i] == ' ' && s[i - 1] != ' ')
		ret++;
	return ret;
    }
}
