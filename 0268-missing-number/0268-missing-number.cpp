class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(auto n : nums) sum += n;
        int n = nums.size();
        int nsum = (n * (n+1)) / 2;
        return nsum - sum;
    }
};