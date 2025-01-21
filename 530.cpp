class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> vec;
        helper(root,vec);
        int minval=INT_MAX;
        for(int i=1;i<vec.size();i++){
            if(vec[i]-vec[i-1]<minval){
                minval=vec[i]-vec[i-1];
            }
        }
        return minval;
    }
    void helper(TreeNode* root,vector<int>& vec){
        if(!root){return;}
        helper(root->left,vec);
        vec.push_back(root->val);
        helper(root->right,vec);
    }
};