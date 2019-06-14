class Solution {
public:
    string convertToTitle(int n) {
	if (n == 1) return "A";

	string str;
	stack<char> stk;

	n = n - 1;

	while (n >= 0) {
	    stk.push(n % 26 + 'A');
	    n = n / 26 - 1;
	}

	while (!stk.empty()) {
	    str = str + stk.top();
	    stk.pop();
	}

	return str;
    }
};
