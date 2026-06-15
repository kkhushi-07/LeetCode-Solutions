class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        if not matrix:
            return
        
        ROWS = len(matrix)
        COLS = len(matrix[0])
        
        # Flag to track if the first row needs to be set to zero later
        first_row_zero = False
        
        # 1. Use the first row and first column as markers
        for r in range(ROWS):
            for c in range(COLS):
                if matrix[r][c] == 0:
                    # Mark the column indicator in the first row
                    matrix[0][c] = 0
                    
                    # Mark the row indicator in the first column
                    if r > 0:
                        matrix[r][0] = 0
                    else:
                        # If the zero is in the first row, flag it separately
                        first_row_zero = True
                        
        # 2. Iterate from the second row/col onwards and update cells based on markers
        for r in range(1, ROWS):
            for c in range(1, COLS):
                if matrix[0][c] == 0 or matrix[r][0] == 0:
                    matrix[r][c] = 0
                    
        # 3. Handle the first column marker if the top-left cell is zero
        if matrix[0][0] == 0:
            for r in range(ROWS):
                matrix[r][0] = 0
                
        # 4. Handle the first row marker if our flag was set to True
        if first_row_zero:
            for c in range(COLS):
                matrix[0][c] = 0
