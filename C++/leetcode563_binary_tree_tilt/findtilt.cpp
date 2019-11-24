class Solution {
    public:
        int tilt = 0;

        int traverse(TreeNode *root) {
            if (root == nullptr)
                return 0;
            int left  = traverse(root->left);
            int right = traverse(root->right);
            tilt += abs(left - right);
            return left + right + root->val;
        }

        int findTilt(TreeNode *root) {
            traverse(root);
            return tilt;
        }
};

