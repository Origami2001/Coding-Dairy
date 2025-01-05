class Solution {
public:
    int maxdepth=INT_MIN;
    int result;
    void dfs(TreeNode* root, int depth){
        if(root==NULL){return;}
        if(root->left==NULL && root->right==NULL){
            if(depth>maxdepth){
                maxdepth=depth;
                result=root->val;
            }
            return;
        }
        dfs(root->left,depth+1);
        dfs(root->right,depth+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,0);
        return result;
    }
};