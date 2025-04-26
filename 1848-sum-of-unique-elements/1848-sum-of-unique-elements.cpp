class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int na[101] = {0};
        int sum = 0;
        for(auto n : nums)na[n]++;
        for(int i = 1; i < 101; i++){
            if(na[i] == 1) sum += i;
        }
        return sum;
    }
};