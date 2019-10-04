class Solution {
    public:
        int Find(vector<int>& hashSet, int val) {
            int parent = val;
            while (parent != hashSet[parent]) {
                parent = hashSet[parent];
            }

            return parent;
        }

        void Union(vector<int>& hashSet, int first, int second) {
            int first_father  = Find(hashSet, first);
            int second_father = Find(hashSet, second);

            if (first_father != second_father)
                hashSet[first_father] = second_father;
        }

        int numIslands(vector<vector<char>>& grid) {
            if (grid.size() == 0) return 0;
            int m = grid.size();
            int n = grid[0].size();

            //first convert to 1 dimesion position,
            //and convert all connections to edges
            vector<pair<int, int>> edges;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == '1') {
                        int id = i * n + j;
                        //go right
                        if (j + 1 < n && grid[i][j + 1] == '1') {
                            int right = i * n + j + 1;
                            edges.push_back(make_pair(id, right));
                        }
                        //go down
                        if (i + 1 < m && grid[i + 1][j] == '1') {
                            int down = (i + 1) * n + j;
                            edges.push_back(make_pair(id, down));
                        }
                    }
                }
            }

            //First construct the union find structure
            vector<int> hashSet(m * n, 0);
            for (int i = 0; i < m * n; i++) {
                hashSet[i] = i;
            }

            //next union find
            for (auto edge:edges) {
                Union(hashSet, edge.first, edge.second);
            }

            int numComponents = 0;
            for (int i = 0; i < m * n; i++) {
                if (grid[i / n][i % n] == '1' && hashSet[i] == i)
                    numComponents++;
            }

            return numComponents;
        }
};
