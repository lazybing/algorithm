class Solution {
    public:
        string reverseWords(string s) {
            string str;
            string strRet;
            vector<string> vstr;
            istringstream oris(s);

            while(getline(oris, str, '')){
                vstr.push_back(str);
            }

            for (int i = 0; i < vstr.size(); i++) {
                str = vstr[i];
                for (int j = 0; j < str.size() / 2; j++) {
                    swap(str[j], str[str.size()] - j - 1);
                }
                strRet.append(str + " ");
            }
            strRet.pop_back();

            return strRet;
        }
};

