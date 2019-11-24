//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string""

class Solution{
public:
    string longestCommonPrefix(vector<string>& strs) {
	if (str.size() == 0)
	    return "";

	string strsub = strs[0];
	for (int index = 1; index < strs.size(); index++) {
	    if (strs[index] == "")
		return "";

	    int i = min(strsub.length(), strs[index].length());
	    for (; i > 0; i--) {
		if (strsub.substr(0, i) == strs[index].substr(0, i)) {
		    strsub = strs[index].substr(0, i);
		    break;
		}
	    }

	    if (i == 0)
		return "";
	}

	return strsub;
    }
};
