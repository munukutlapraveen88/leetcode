class Solution {
    int m, n;
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        m = image.size();
        n = image[0].size();
        int val = image[sr][sc];
        fill(image, sr, sc, color,val);
        return image;
    }
    bool isValid(int x, int y){
        if(x < 0 || x > m-1 || y < 0 || y > n-1) return false;
        return true;
    }
    void fill(vector<vector<int>>& image, int sr, int sc, int color, int val){
        if(!isValid(sr,sc)) return;
        if(image[sr][sc] == color || image[sr][sc] != val) return;

        image[sr][sc] = color;

        fill(image, sr+1, sc, color, val);
        fill(image, sr, sc+1, color, val);
        fill(image, sr-1, sc, color, val);
        fill(image, sr, sc-1, color, val);
    }
};