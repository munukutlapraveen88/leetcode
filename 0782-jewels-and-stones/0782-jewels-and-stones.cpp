class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> uset(jewels.begin(), jewels.end());
        int count = 0;
        for(auto s : stones){
            if(uset.find(s)!=uset.end())
                count++;
        }
        return count;
    }
};