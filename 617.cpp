class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1)return root2;
        if(!root2)return root1;
        queue<TreeNode*> que;
        que.push(root1);
        que.push(root2);
        while(!que.empty()){
            TreeNode* node1=que.front(); que.pop();
            TreeNode* node2=que.front(); que.pop();
            node1->val+=node2->val;
            if(node1->left!=NULL && node2->left!=NULL){
                que.push(node1->left);
                que.push(node2->left);
            }
            if(node1->right!=NULL && node2->right!= NULL){
                que.push(node1->right);
                que.push(node2->right);
            }
            if(node1->left == NULL&&node2->left!= NULL){
                node1->left=node2->left;
            }
            if(node1->right == NULL && node2->right!=NULL){
                node1->right=node2->right;
            }
        }
        return root1;
    }
};


class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1)return(root2);
        if(!root2)return(root1);

        root1->val+=root2->val;
        root1->left=mergeTrees(root1->left, root2->left);
        root1->right=mergeTrees(root1->right, root2->right);
        return root1;
    }
};