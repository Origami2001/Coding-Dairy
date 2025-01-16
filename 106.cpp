class Solution {
public:
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder){
        if(postorder.size()==0) return NULL;
        int TreeNodeval=postorder[postorder.size()-1];
        TreeNode* root=new TreeNode(TreeNodeval);
        if(postorder.size()==1) return root;

        int delimiter;
        for(delimiter=0;delimiter<inorder.size();delimiter++){
            if(inorder[delimiter]==TreeNodeval) break;
        }
        vector<int> leftinorder(inorder.begin(),inorder.begin()+delimiter);
        vector<int> rightinorder(inorder.begin()+delimiter+1,inorder.end());
        postorder.resize(postorder.size()-1);
        vector<int> leftpostorder(postorder.begin(),postorder.begin()+leftinorder.size());
        vector<int> rightpostorder(postorder.begin()+leftinorder.size(),postorder.end());

        root->left=helper(leftinorder,leftpostorder);
        root->right=helper(rightinorder, rightpostorder);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(postorder.size()==0 || inorder.size()==0) return NULL;
        return helper(inorder,postorder);
    }
};