class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums,0,nums.size()-1);
    }
    TreeNode* build(vector<int>& nums, int left, int right){
        if(left>right){return nullptr;}
        int maxindex=left;
        for(int i=left;i<=right;i++){
            if(nums[i]>nums[maxindex]){
                maxindex=i;
            }
        }
        TreeNode* root = new TreeNode(nums[maxindex]);
        root->left=build(nums,left,maxindex-1);
        root->right=build(nums,maxindex+1,right);
        return root;
    }

};