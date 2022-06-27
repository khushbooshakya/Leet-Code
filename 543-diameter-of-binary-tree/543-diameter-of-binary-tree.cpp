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
    int diameter(TreeNode* root,int &d) {
        if(!root){
            return 0;
        }
        // int diameter;
        int l=diameter(root->left,d);
        int r=diameter(root->right,d);
        d=max(d,l+r);
        return (max(l,r))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int path = 0;
        diameter(root, path);
        return path;
    }
    
};