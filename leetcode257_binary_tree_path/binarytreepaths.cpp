class Solution{
public:
    vector<string> binaryTreepaths(TreeNode* root) {
	vector<string> result;
	if(!root) return result;

	binaryTreepath(result, root, to_string(root->val));
	return result;
    }

    void binaryTreepath(vector<string>& result, TreeNode* root, string t){
	if(!root->left && !root->right){
	    result.push_back(t);
	    return;
	}

	if(root->left)
	    binaryTreepath(result, root->left, t + "->" + to_string(root->left));
	if(root->right)
	    binaryTreepath(result, root->right, t + "->" + to_string(root->right));
    }
};
