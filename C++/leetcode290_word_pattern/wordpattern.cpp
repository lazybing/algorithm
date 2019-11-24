class Solution {
    public:
        bool wordPattern(string pattern, string str) {
            string s;
            vector<string> vs;
            istringstream strcin(str);
            while(strcin >> s)
                vs.push_back(s);

            if (vs.size() != pattern.size())
                return false;

            map<string, char> s2c;
            map<char, string> c2s;

            for (int i = 0; i < pattern.size(); i++) {
                if (s2c[vs[i]] == 0 && c2s[pattern[i]] == "") {
                    s2c[vs[i]] = pattern[i];
                    c2s[pattern[i]] = vs[i];
                    continue;
                }
                if (s2c[vs[i]] != pattern[i])
                    return false;
            }

            return true;
        }
};
