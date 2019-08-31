class Solution {
    private:
        bool desirablewin(string &t, unordered_multiset<char> setting) {
            for (int idx = 0; idx < t.size(); idx++) {
                if (setting.find(t[idx]) == setting.end())
                    return false;
                else
                    setting.erase(setting.find(t[idx]));
            }
            return true;
        }
    public:
        string minWindow(string s, string t) {
            if (s.size() == 0 || t.size() == 0 || t.size() > s.size())
                return "";

            int left = 0, right = 0;
            unordered_multiset<char> setting;
            string res;

            for (left = 0, right = 0; right <= s.size() || left + t.size() < right;) {
                if(desirablewin(t, setting)) {
                    if (res.empty() || res.size() > right - left) {
                        res = s.substr(left, right - left);
                    }
                    setting.erase(setting.find(s[left]));
                    left++;
                } else if (right < s.size()) {
                    setting.insert(s[right]);
                    right++;
                } else {
                    break;
                }
            }

            return res;
        }
};
