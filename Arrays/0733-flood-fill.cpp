class Solution {
private:
    void dfs(vector<vector<int>>& image, int r, int c, int originalColor, int newColor) {
        int m = image.size();
        int n = image[0].size();

        // Boundary checks and color match check
        if (r < 0 || r >= m || c < 0 || c >= n || image[r][c] != originalColor) {
            return;
        }

        // Fill color
        image[r][c] = newColor;

        // Traverse 4 directions
        dfs(image, r - 1, c, originalColor, newColor); // Up
        dfs(image, r + 1, c, originalColor, newColor); // Down
        dfs(image, r, c - 1, originalColor, newColor); // Left
        dfs(image, r, c + 1, originalColor, newColor); // Right
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        
        // Edge case: If the target color is same as starting pixel color
        if (originalColor != color) {
            dfs(image, sr, sc, originalColor, color);
        }

        return image;
    }
};
