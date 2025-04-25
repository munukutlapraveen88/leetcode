class Solution {
    vector<int> cache = vector<int>(36, -1);
public:
    int fib(int n) {
        if(n <= 1) return n;
        if(cache[n]!=-1)return cache[n];
        return cache[n] = fib(n-1) + fib(n-2);
    }
};