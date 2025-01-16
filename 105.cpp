class Solution {
public:
    TreeNode* helper(vector<int>& preorder,vector<int>& inorder){
        if(preorder.size()==0){
            return NULL;
        }
        int TreeNodeval=preorder[0];
        TreeNode* root=new TreeNode(TreeNodeval);
        if(preorder.size()==1){return root;}
        int delimiter;
        for(delimiter=0;delimiter<inorder.size();delimiter++){
            if(inorder[delimiter]==TreeNodeval){break;}
        }
        vector<int> leftinorder(inorder.begin(),inorder.begin()+delimiter);
        vector<int> rightinorder(inorder.begin()+delimiter+1,inorder.end());
        preorder.erase(preorder.begin());
        vector<int> leftpreorder(preorder.begin(),preorder.begin()+leftinorder.size());
        vector<int> rightpreorder(preorder.begin()+leftinorder.size(),preorder.end());

        root->left=helper(leftpreorder,leftinorder);
        root->right=helper(rightpreorder, rightinorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0||inorder.size()==0){
            return NULL;
        }
        return helper(preorder,inorder);
    }
};