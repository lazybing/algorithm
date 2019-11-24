class Solution{
    public:
        bool isSameTree (TreeNode *p, TreeNode *q) {
            if (p == NULL && q == NULL)
                return true;

            if ((q == NULL && p != NULL) ||
                (q != NULL && p == NULL) ||
                (q->val != p->val))
                return false;
            else
                return isSameTree(p->left, q->left) &&
                       isSameTree(p->right, q->right);
        }
};
