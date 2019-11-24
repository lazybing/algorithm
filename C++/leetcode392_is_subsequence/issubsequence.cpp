class Solution {
    public:
        bool isSubsequence(string s, string t) {
            if (t.size() < s.size()) return false;
            if (s.size() == 0) return true;
            int i = 0, j = 0;

            for (int i = 0; i < s.size(); i++)
                for (; j < t.size(); j++) {
                    if (i == s.size() - 1 && s[i] == t[j])
                        return true;
                    if (s[i] == t[j]) {
                        j++;
                        break;
                    }
                }

            return false;
        }
};
