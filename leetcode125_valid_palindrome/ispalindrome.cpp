class Solution {
public:
    bool isalphanumeric(char x) {
	return ((x >= '0' && x <= '9') ||
		(x >= 'a' && x <= 'z') ||
		(x >= 'A' && x <= 'Z'));
    }

    bool isalpha(char x) {
	return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
    }

    bool isPalindrome(strings s){
	if (s.empty()) return true;

	int i = 0, j = s.size() - 1;
	while (i < j) {
	    if (isalphanumeric(s[i]) && isalphanumeric(s[i]) &&
	       (s[i] == s[j] || (isalpha(s[i]) && isalpha[j] && abs(s[i] - s[j]) == 'a' - 'A')))
	       {
		    i++;
		    j++;
	       }else if(!isalphanumeric(s[i])){
		    i++;
	       }else if(!isalphanumeric(s[j])){
		    j--;
	       }else
		    return false;
	}

	return true;
    }
};
