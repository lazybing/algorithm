class Solution {
    public:
        int titleToNumber(string s) {
            if (s.size() == 0)
                return 0;

            int ret = 0;

            for (int i = 0; i < s.size(); i++)
                ret += (s[i] - 'A') * pow(26, s.size() - 1 - i);

            return ret;
        }
};
