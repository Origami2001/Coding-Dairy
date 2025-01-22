class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            TreeNode* node=new TreeNode(val);
            return node;
        }
        TreeNode* cur=root;
        TreeNode* pre=root;
        while(cur!=nullptr){
            pre=cur;
            if(cur->val>val) {cur=cur->left;}
            else{cur=cur->right;}
        }
        TreeNode* node=new TreeNode(val);
        if(pre->val>val) {pre->left=node;}
        else{pre->right=node;}
        return root;
    }
};