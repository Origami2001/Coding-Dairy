class Solution {
public:
    void dfs(TreeNode* root, int targetSum, vector<int>& path, vector<vector<int>>& result){
        if(root==NULL){return;}
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==targetSum){
            result.push_back(path);
        }
        dfs(root->left,targetSum - root->val,path,result);
        dfs(root->right,targetSum - root->val,path,result);
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> result;
        dfs(root,targetSum,path,result);
        return result;
    }
};