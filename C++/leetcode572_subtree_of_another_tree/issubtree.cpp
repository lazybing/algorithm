class Solution {
    public:
        bool isSameTree(TreeNode *p, TreeNode *q) {
            if (p == NULL && q == NULL)
                return true;
            if (p == NULL || q == NULL)
                return false;
            if (q->val == p->val)
                return isSameTree(p->left, q->left) &&
                    isSameTree(p->right, q->right);
            else
                return false;
        }
        bool isSubtree(TreeNode *s, TreeNode *t) {
            if (!s)
                return false;
            return isSameTree(s, t) ||
                isSubtree(s->left, t) ||
                isSubtree(s->right, t);
        }
};
