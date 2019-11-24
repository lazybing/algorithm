class Solution{
public:
    vector<int> plusOne(vector<int>& digits) {
	for (char i = digits.siz() - 1; i >= 0; i--)
	{
	    digits[i] += 1;
	    if (digits[i] > 9) {
		digits[i] = 0;
		continue;
	    }
	    break;
	}

	if (!digits[0]) {
	    digits.insert(digits.begin(), 1);
	}

	return digits;
    }
};
