class Solution {
    public:
        bool canConstruct (string ransomNote, string magazine) {
            unordered_map<char, int> map(26);

            for (int i = 0; i < magazine.size(); i++)
                map[magazine[i]]++;

            for (int j = 0; j < ransomNote.size(); j++)
                if (--map[ransomNote[j]] < 0)
                    return false;

            return true;
        }
};
