class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==nullptr){
            return ans;
        }
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                Node* front = q.front();
                q.pop();
                level.push_back(front->val);
                
                for(auto neighbour: front->children){
                    if(neighbour!=nullptr){
                        q.push(neighbour);
                    }
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};