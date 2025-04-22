class Solution {
    int cache[50];
public:
    Solution(){
        for(int i = 0; i < 50; i++) cache[i] = -1;
    }
    int climbStairs(int n) {
        if(n < 0) return 0;
        if(n == 0) return 1;
        if(cache[n] != -1) return cache[n];
        return cache[n] = climbStairs(n-1)+climbStairs(n-2);
    }
};