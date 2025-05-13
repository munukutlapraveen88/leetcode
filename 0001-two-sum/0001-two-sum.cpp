class Solution {
    unordered_map<int,int> umap;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(umap.find(target-nums[i]) != umap.end()){
                return {umap[target-nums[i]], i};
            }
            umap[nums[i]] = i;
        }
        return {0,0};
    }
};