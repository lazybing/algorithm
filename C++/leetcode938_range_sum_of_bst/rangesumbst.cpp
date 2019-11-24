class Solution{
    public:
        int rangeSumBST(TreeNode * root, int L, int R) {
            if (root == NULL)
                return 0;

            if (root->left == NULL && root->right == NULL &&
                root->val >= L && root->val <= R)
                return root->val;

            if (root->val < L)
                return rangeSumBST(root->right, L, R);
            else if (root->val > R)
                return rangeSumBST(root->left, L, R);
            else
                return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        }
};
