class Solution {
    public:
        int diameterOfBinaryTree(TreeNode * root) {
            if (root == nullptr)
                return 0;

            int res = 0;
            dfs(root, res);
            return res - 1;
        }

        vector<int> dfs(TreeNode *root, int &res) {
            if (root == nullptr)
                return {0, 0};

            auto l = dfs(root->left, res);
            auto r = dfs(root->right, res);
            int path = max(l[0], l[1]) + 1 + max(r[0], r[1]);
            res = max(res, path);
            return {max(l[0], l[1]) + 1, 1 + max(r[0], r[r1])};
        }
};
