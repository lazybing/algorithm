class Solution {
    public:
        vector<int> countbits(int num) {
            vector<int> res;

            for (int i = 0; i <= num; i++) {
                int cnt = 0;
                int val = i;

                while (val > 0) {
                    cnt += (val & 0x1);
                    val >>= 1;
                }

                res.push_back(cnt);
            }

            return res;
        }
};
