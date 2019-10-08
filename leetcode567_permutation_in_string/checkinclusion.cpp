class Solution {
    public:
        bool checkInclusion(string s1, string s2) {
            vector<int> cnts(256, 0);
            for (char ch: s1) {
                cnts[ch]++;
            }

            int left = s1.size();
            for (int i = 0, j = 0; j < s2.size(); j++) {
                if (cnts[s2[j]]-- > 0) {
                    left--;
                }

                while(left == 0) {
                    if (j + 1 - i == s1.size())
                        return true;

                    if (++cnts[s2[i++]] > 0)
                        left++;
                }
            }

            return false;
        }
};

//time limit solution
class Solution {
    public:
        bool checkInclusion(string s1, string s2) {
            unordered_multiset<char> setting;
            for (int i = 0; i < s1.size(); i++)
                setting.insert(s1[i]);

            for (int left = 0, right = s1.size(); left <= s2.size() - s1.size() && right <= s2.size(); left++, right++) {
                unordered_multiset<char> tmp(setting);
                for (int i = left; i < right; i++) {
                    if (tmp.find(s2[i]) != tmp.end()) {
                        tmp.erase(tmp.find(s2[i]));
                    } else {
                        break;
                    }
                }

                if (tmp.empty())
                    return true;
            }

            return false;
        }
};
