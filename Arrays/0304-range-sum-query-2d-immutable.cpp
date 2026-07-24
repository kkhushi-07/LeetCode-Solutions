class NumMatrix {
private:
    vector<vector<int>> prefix;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // 1-based indexing ke liye size (rows+1) x (cols+1) rakha hai
        prefix = vector<vector<int>>(rows + 1, vector<int>(cols + 1, 0));

        // Prefix matrix build karna
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                prefix[r + 1][c + 1] = matrix[r][c] 
                                      + prefix[r][c + 1] 
                                      + prefix[r + 1][c] 
                                      - prefix[r][c];
            }
        }
    }
    
    // Sub-matrix sum in O(1) Time
    int sumRegion(int row1, int col1, int row2, int col2) {
        // 1-based indexing adjust karne ke liye indices +1 kiye hain
        return prefix[row2 + 1][col2 + 1] 
             - prefix[row1][col2 + 1] 
             - prefix[row2 + 1][col1] 
             + prefix[row1][col1];
    }
};
