class Solution {
    private:
        int getgraycode(int val, int num)
        {
            int i = 0;
            int gray = 0;
            while (i < num) {
                int tmp = ((val & 0x3) == 1) || (val & 0x3) == 2);
                gray |= tmp << i;
                val = val >> 1;
                i++;
            }

            return gray;
        }
    public:
        vector<int> grayCode(int n) {
            vector<int> res;
            if (n == 0) {
                res.push_back(0);
                return res;
            }

            for (int i = 0; i < (1 << n); i++) {
                int gray = getgraycode(i, n);
                res.push_back(gray);
            }
        }
};
