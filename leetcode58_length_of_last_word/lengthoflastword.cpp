class Solution{
    public:
        int lengthofLastWord(string s) {
            int length = 0;

            for (int i = s.size() - 1; i >= 0; i--) {
                if (s[i] != ' ')
                    length++;
                else {
                    if (length == 0)
                        continue;
                    else
                        return length;
                }
            }
            return length;
        }
};

