class Solution{
    public:
        bool isSymmetric(TreeNode *root) {
            return isSymmetricTwo(root, root);
        }

        bool isSymmetricTwo(TreeNode*a, TreeNode*b){
            if (a == NULL && b == NULL) return true;
            if (a == NULL || b == NULL) return false;

            return ((a->val == b->val) &&
                    isSymmetricTwo(a->left, b->right) &&
                    isSymmetricTwo(a->right, b->left));
        }
};
