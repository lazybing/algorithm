class Solution {
    public:
        int lengthofLongestSubstring(string s) {
            int len = s.size();
            int slow = 0, fast = 0;
            int ret = 0;
            unordered_set<char> myset;
            for (int i = 0; i < len; i++) {
                if (myset.find(s[i]) != myset.end()) {
                    while (slow < fast) {
                        if (s[slow] == s[i]) {
                            myset.erase(s[slow]);
                            slow++;
                            break;
                        } else {
                            myset.erase(s[slow]);
                            slow++;
                        }
                    }
                }
                myset.insert(s[i]);
                fast = i + 1;
                ret = max(fast - slow , ret);
            }
            return ret;
        }
};
