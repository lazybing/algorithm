class Solution{
    public:
        string getPermutation(int n, int k) {
            int pTable[10] = {0};
            for (int i = 1; i <= 9; i++) {
                pTable[i] = i * pTable[i - 1];
            }

            string result;
            vector<char> numset;

            numset.push_back('1');
            numset.push_back('2');
            numset.push_back('3');
            numset.push_back('4');
            numset.push_back('5');
            numset.push_back('6');
            numset.push_back('7');
            numset.push_back('8');
            numset.push_back('9');

            while (n > 0) {
                int temp = (k - 1) / pTable[n - 1];
                result += numset[temp];
                numset.erase(numset.begin() + temp);
                k = k - temp * pTable[n - 1];
                n--;
            }

            return result;
        }
};
