class Solution{
public:
    TreeNode* lowestCommonAncestor(Treenode *root, TreeNode* p, TreeNode* q) {
	if (p->val > root->val && q->val > root->val)
	    return lowestCommonAncestor(root->right, p, q);
	else if (p->val < root->val && q->val < root->val)
	    return lowestCommonAncestor(root->left, p, q);
	else
	    return root;
    }
};
