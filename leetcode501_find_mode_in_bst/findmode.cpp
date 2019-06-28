class Solution {
public:
    int maxFreq = 0, currFreq = 0, precursor = INT_MIN;
    vector<int> result;

    vector<int> findMode(TreeNode* root){
	inorderTraversal(root);
	return result;
    }

    void inorderTraversal(TreeNode* root)
    {
	if (root == NULL)
	    return;
	
	//Traverse left subtree
	inorderTraversal(root->left);

	if (precursor == root->val)
	    currFreq++;
	else
	    currFreq = 0;
	
	if (currFreq > maxFreq)
	{
	    // Current node value has higher frequency
	    // than any previous visited
	    result.clear();
	    maxFreq = currFreq;
	    result.push_back(root->val);
	} else if (currFreq == maxFreq) {
	    // Current node value has a frequency equal to
	    // the highest of previous visited
	    result.push_back(root->val);
	}

	// Update the precursor
	precursor = root->val;
	// Traverse right subtree
	inorderTraversal(root->right);
    }
};
