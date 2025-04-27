/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int> res;
public:
    vector<int> postorder(Node* root) {
        util(root);
        return res;
    }
    void util(Node* root){
        if(!root) return;
        for(auto c : root->children){
            util(c);
        }
        res.push_back(root->val);
    }
};