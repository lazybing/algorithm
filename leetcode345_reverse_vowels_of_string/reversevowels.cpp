class Solution {
    public:
        string reverseVowels (string& s){
            int i = 0, j = s.size() - 1;
            while (i < j) {
                if (isvowel(s[i]) && isvowel(s[j])) {
                    swap(s[i], s[j]);
                    i++;
                    j++;
                }
                if (!isvowel(s[i]))
                    i++;
                if (!isvowel(s[j]))
                    j--;
            }

            return s;
        }

        bool isvowel(char tmp){
            return tmp == 'a' || tmp == 'e' || tmp == 'i' || tmp == 'o' || tmp == 'u' ||
                    tmp == 'A' || tmp == 'E' || tmp == 'I' || tmp == 'O' || tmp == 'U';
        }
};
