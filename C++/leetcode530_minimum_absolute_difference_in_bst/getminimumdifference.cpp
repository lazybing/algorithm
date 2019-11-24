class Solution{
    public:
        int getMinimumDifference(TreeNode* root) {
            stack<TreeNode *> treestack;
            TreeNode *p = root;
            queue<int> nodequeue;
            int retVal = INT_MAX;

            while (p != nullptr || !treestack.empty()) {
                if (p != nullptr) {
                    treestack.push(p);
                    p = p->left;
                } else {
                    p = treestack.top();
                    nodequeue.push(p->val);
                    treestack.pop();
                    p = p->right;
                }
            }

            int size = nodequeue.size();
            for (int i = 1; i < size; i++) {
                int tmp1 = nodequeue.front();
                nodequeue.pop();
                int tmp2 = nodequeue.front();
                retVal = min(retVal, tmp2 - tmp1);
            }

            return retVal;
        }
};
