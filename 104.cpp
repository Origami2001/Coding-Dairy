/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int get(TreeNode* node){
        if(node==NULL) return 0;
        int leftdep=get(node->left);
        int rightdep=get(node->right);
        int depth=max(leftdep,rightdep)+1;
        return depth;
    }
    int maxDepth(TreeNode* root) {
        return get(root);
    }
    
};