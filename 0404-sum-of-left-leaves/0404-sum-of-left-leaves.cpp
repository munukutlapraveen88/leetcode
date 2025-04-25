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
    int sum = 0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        util(root);
        return sum;
    }
    void util(TreeNode* root){
        if(!root) return;
        if(root->left && root->left->left == nullptr && root->left->right == nullptr)
          sum += root->left->val;
        util(root->left);
        util(root->right);
    }
};