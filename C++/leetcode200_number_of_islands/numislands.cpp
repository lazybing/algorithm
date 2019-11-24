//union find solution
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

//dfs solution
class Solution {
    private:
        void dfs(vector<vector<char>>& grid, int x, int y, int m, int n) {
            if (x < 0 || y < 0 || x >= n || y >= m || grid[y][x] == '0')
                return;

            grid[y][x] = '0';
            dfs(grid, x + 1, y, m, n);
            dfs(grid, x - 1, y, m, n);
            dfs(grid, x, y + 1, m, n);
            dfs(grid, x, y - 1, m, n);
        }
    public:
        int numIslands(vector<vector<char>>& grid) {
            if (grid.size() == 0) return 0;
            int m = grid.size();
            int n = grid[0].size();

            int res = 0;

            for (int y = 0; y < m; y++) {
                for (int x = 0; x < n; x++) {
                    res += grid[y][x] - '0';
                    dfs(grid, x, y, m, n);
                }
            }

            return res;
        }
};
