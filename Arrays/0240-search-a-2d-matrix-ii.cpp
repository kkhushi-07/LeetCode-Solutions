class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int m = matrix.size();
        int n = matrix[0].size();
        
        int row = 0;
        int col = n - 1; // Start at Top-Right corner

        while (row < m && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                col--; // Target is smaller, move left
            } else {
                row++; // Target is larger, move down
            }
        }

        return false;
    }
};
