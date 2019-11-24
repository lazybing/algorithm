class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.size() != t.size())
                return false;

            int counter[26] = {0};
            for (int i = 0; i < s.size(); i++) {
                counter[s[i] - 'a']++;
                counter[t[i] - 'a']--;
            }

            for (int i = 0; i < s.size(); i++)
                if (counter[s[i] - 'a'])
                    return false;

            return true;

        }
};
