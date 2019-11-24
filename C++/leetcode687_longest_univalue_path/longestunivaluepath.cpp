class Solution {
    public:

        int longestPath(TreeNode * node, int & ret){
            if (node == NULL)
                return 0;

            int left  = longestPath(node->left, ret);
            int right = longestPath(node->right, ret);
            int tmp1 = tmp2 = 0;
            
            if (node->left && node->left->val == node->val)
                tmp1 = left + 1;
            if (node->right && node->right->val == node->val)
                tmp2 = right + 1;

            ret = max(ret, tmp1 + tmp2);

            return max(tmp1, tmp2);
        }


        int longestUnivaluePath(TreeNode * root){
            int ret = 0;
            longestPath(root, ret);

            return ret;
        }
};
