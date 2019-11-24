class Solution {
	public:
		string addStrings(string num1, string num2) {
			string ret = "";
			int carray = 0;
			int m = num1.size(), num2.size();

			while (m > 0 || n > 0 || carray) {
				long sum = 0;
				if (m > 0) {
					sum += (num1[m - 1] - '0');
					m--;
				}
				if (n > 0) {
					sum += (num2[n - 1] - '0');
					n--;
				}
				sum += carray;
				carray = sum / 10;
				sum = sum % 10;
				ret = ret + to_string(sum);
			}
			reverse(ret.begin(), ret.end());
			return ret;
		}
};
