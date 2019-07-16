class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            char charArrS[256] = {0};
            char charArrT[256] = {0};
            int i = 0;
            while(s[i] != 0){
                if (charArrS[s[i]] == 0 && charArrT[t[i]] == 0)
                {
                    charArrS[s[i]] = t[i];
                    charArrT[t[i]] = s[i];
                }else{
                    if (charArrS[s[i]] != t[i] || charArrT[t[i]] != s[i])
                        return false;
                }
                i++;
            }
            return true;
        }
};
