class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it: mpp){
            pq.push({it.second, it.first});
        }
        vector<int> ans;
        while(k){
            int temp = pq.top().second;
            pq.pop();
            ans.push_back(temp);
            k--;
        }
        return ans;
    }
};