class Solution {
    public:
        TreeNode* sortedArrayToBST(vector<int>& nums) {
            return createNode(nums, 0, nums.size() - 1);
        }

        TreeNode* createNode(vector<int>& nums, int low, int high){
            TreeNode *node = NULL;

            if(low <= high){
                int mid = low + (high - low) / 2;
                node = new TreeNode(nums[mid]);
                node->left  = createNode(nums, low, mid - 1);
                node->right = createNode(nums, mid + 1, high);
            }

            return node;
        }
};
