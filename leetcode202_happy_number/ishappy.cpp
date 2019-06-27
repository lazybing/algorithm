class Solution {
public:
    bool isHappy (int n) {
	long long int tmp = 0;

	while (n != 1 && n != 4) {
	    while (n) {
		tmp += (n % 10) * (n % 10);
		n /= 10;
	    }
	    n = tmp;
	    tmp = 0;
	}

	return n == 1;
    }
};
