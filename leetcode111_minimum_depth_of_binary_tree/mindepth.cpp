class Solution {
    public:
        int minDepth(TreeNode* root){
            if (root == NULL) return 0;
            if (root->right == NULL)
                return 1 + minDepth(root->left);
            if (root->left == NULL)
                return 1 + minDepth(root->right);
            return 1 + min(minDepth(root->left), minDepth(root->right));
        }
};
