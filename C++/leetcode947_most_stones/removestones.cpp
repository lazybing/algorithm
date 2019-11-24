class Solution {
    public:
        vector<int> vroot;
        int getRoot(int i) {
            if (vroot[i] != i)
                vroot[i] = getRoot(vroot[i]);

            return vroot[i];
        }

        void connect(int i , int j) {
            vroot[getRoot[i]] = getRoot(j);
        }

        int removeStones(vector<vector<int>>& stones) {
            const int n = stones.size();
            vroot = vector<int>(n);

            for (int i = 0; i < n; i++)
                vroot[i] = i;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++) {
                    if (stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
                        connect(i, j);
                }
            }

            int cnt = 0;
            for (int i = 0; i < n; i++)
                if (vroot[i] == i)
                    cnt++;

            return n - cnt;
        }
};
