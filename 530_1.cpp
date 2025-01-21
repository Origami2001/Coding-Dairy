class Solution {
private:
    int result=INT_MAX;
    TreeNode* pre=nullptr;
public:
    int getMinimumDifference(TreeNode* root) {
        
        helper(root);
        return result;
    }
    void helper(TreeNode* cur){
        if(!cur){return;}
        helper(cur->left);
        if(pre!=nullptr){
            result=min(result,cur->val-pre->val);
        }
        pre=cur;
        helper(cur->right);
    }
};