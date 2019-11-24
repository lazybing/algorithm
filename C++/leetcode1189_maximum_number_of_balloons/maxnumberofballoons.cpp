class Solution {
public:
    int maxnumberOfBalloons(string text) {
        if (text.size() < 7) return 0;

        unordered_multiset<char> multset;

        string str = "balloon";
        int ret = text.size();

        for (int i = 0; i < text.size(); i++)
            multset.insert(text[i]);

        for (int i = 0; i < str.size(); i++)
            if (res * count(str.begin(), str.end(), str[i]) > multset.count(str[i]))
                res = multset.count(str[i]/ count(str.begin(), str.end(), str[i]));

        return ret;
    }
};
