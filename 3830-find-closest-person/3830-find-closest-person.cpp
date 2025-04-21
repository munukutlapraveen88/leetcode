class Solution {
public:
    int findClosest(int x, int y, int z) {
        int s1 = abs(z - x);
        int s2 = abs(z - y);
        if (s1 == s2) return 0;
        return s1 < s2 ? 1 : 2;
    }
};
