class Solution {
    public:
        vector<string> findRepeatedDnaSequences(string s) {
            vector<string> res;
            multiset<string> strset;

            if (s.size() < 10)
                return res;

            for (int i = 0; i <= s.size() - 10; i++){
                string str = s.substr(i, 10);
                strset.insert(str);
                if (strset.count(str) == 2)
                    res.push_back(str);
            }
            return res;
        }
};
