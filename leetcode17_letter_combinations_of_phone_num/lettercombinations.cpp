class Solution{
    public:
        vector<string> letterCombinations(string digits){
            vector<string> res;
            if (digits.empty())
                return vector<string>();

            vector<string> source = {"","","abc","def",
                                    "ghi","jkl","mno",
                                    "pqrs","tuv","wxyz"};
            res.push_back("");

            for (int i = 0; i < digits.size(); i++){
                int num = digits[i] - '0';
                const string & candidate = source[num];
                if (candidate.empty())
                    continue;
                vector<string> tmp;
                for (int j = 0; j < candidate.size(); j++){
                    for (int k = 0; k < res.size(); k++){
                        tmp.push_back(res[k] + candidate[j]);
                    }
                }
                res.swap(tmp);
            }

            return res;
        }
};
