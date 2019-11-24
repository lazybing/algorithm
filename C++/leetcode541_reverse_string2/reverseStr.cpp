class Solution {
    public:
        string reverseStr(string s, int k){
            for (int i = 0; i < s.size(); i += 2 * k)
                reverse(&s[i], &s[min((int)s.size(), i + k)]);
            return s;
        }
};
