class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        # Edge case: If the matrix is empty, target cannot be found
        if not matrix or not matrix[0]:
            return False
        
        # Get the total number of rows and columns
        ROWS = len(matrix)
        COLS = len(matrix[0])
        
        # Initialize binary search boundaries as if it's a 1D array
        left = 0
        right = (ROWS * COLS) - 1
        
        # Standard binary search loop
        while left <= right:
            mid = (left + right) // 2
            
            # Map the 1D index 'mid' back to 2D matrix coordinates (row, col)
            row = mid // COLS
            col = mid % COLS
            
            # Fetch the actual value at the current middle position
            mid_val = matrix[row][col]
            
            # Check if the target is found
            if mid_val == target:
                return True
            # If the current value is less than target, discard the left half
            elif mid_val < target:
                left = mid + 1
            # If the current value is greater than target, discard the right half
            else:
                right = mid - 1
                
        # If boundaries cross without finding the target, it does not exist
        return False
