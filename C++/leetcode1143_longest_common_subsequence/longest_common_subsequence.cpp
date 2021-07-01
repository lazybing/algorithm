class Solution {
    public:
        int longestCommonSubsequence(string text1, string text2) {
            vector<vector<short>> m(text1.size() + 1, vector<short>(text2.size() + 1));

            for (auto i = 1; i <= text1.size(); i++) {
                for (auto j = 1; j <= text2.size(); j++) {
                    if (text1[i - 1] == text2[j - 1])
                        m[i][j] = m[i - 1][j - 1] + 1;
                    else
                        m[i][j] = max(m[i - 1][j], m[i][j - 1]);
                }
            }

            return m[text1.size()][text2.size()];
        }
};
