class Solution {
    public:
        int maxDepth (TreeNode* root) {
            if (root == NULL) return 0;
            if ((root != NULL) &&
                (root->left == NULL) &&
                (root->right == NULL))
                return 1;

            return 1 + max(maxDepth(root->left), maxDepth(root->right));
        }
};
