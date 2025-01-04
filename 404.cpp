class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL){return 0;}
        if(root->left==NULL && root->right==NULL){return 0;}
        int leftvalve=sumOfLeftLeaves(root->left);
        if(root->left && !root->left->left && !root->left->right){
            leftvalve=root->left->val;
        }
        int rightvalve=sumOfLeftLeaves(root->right);
        int sum=leftvalve+rightvalve;
        return sum;
    }
};