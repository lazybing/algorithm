class Solution {
public:
    int compress(vector<char>& chars) {
	int i = 0, cnt = 0, t = 0;
	for (int j = 0; j < chars.size(); ++j) {
	    if (j + 1 == chars.size() || chars[j + 1] != chars[j]) {
		int m = t;
		chars[t++] = chars[j];
		if (j >= i + 1) {
		    string s = to_string(j - i + 1);
		    for (char c: s)
			chars[t++] = c;
		}
		i = j + 1;
		cnt += t - m;
	    }
	}
	return cnt;
    }
};
