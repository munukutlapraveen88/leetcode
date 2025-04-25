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
    int minDepth(TreeNode* root) {
        return depth(root);
    }

    int depth(TreeNode* root){
        if(!root) return 0;

        int lheight = depth(root->left);
        int rheight = depth(root->right);

        if(!root->left) return rheight + 1;
        if(!root->right) return lheight + 1;

        return min(lheight, rheight) + 1;
    }
};