class Solution {
public:
    int findClosest(int x, int y, int z) {
        int s1 = z > x ? z-x : x-z;
        int s2 = z > y ? z-y : y-z;
        if(s1 == s2) return 0;
        if(s1 < s2) return 1;
        return 2;
    }
};