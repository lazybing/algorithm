class Solution {
    public:
        TreeNode * convertBST(TreeNode * root) {
            stack<TreeNode*> nstack;
            TreeNode * tmp = root;
            int sum = 0;

            while (tmp || !nstack.empty()) {
                if (tmp) {
                    nstack.push(tmp);
                    tmp = tmp->right;
                } else {
                    tmp = nstack.top();
                    sum += tmp->val;
                    tmp->val = sum;
                    nstack.pop();
                    tmp = tmp->left;
                }
            }

            return root;
        }
};
