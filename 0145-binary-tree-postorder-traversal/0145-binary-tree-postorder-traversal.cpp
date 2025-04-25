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
    vector<int> vec;
public:
    vector<int> postorderTraversal(TreeNode* root) {
        post(root);
        return vec;
    }
    void post(TreeNode* root){
        if(!root) return;
        post(root->left);
        post(root->right);
        vec.push_back(root->val);
    }
};