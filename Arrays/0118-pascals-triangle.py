class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]

        Problem:
        Generate first numRows of Pascal's Triangle.
        Rule: Each number = sum of two numbers directly above it.
        First and last element of every row = 1

        Key Concept:
        1. Row 0: [1]
        2. For each new row, start and end with 1
        3. Middle elements = prev_row[j-1] + prev_row[j]
        4. Build row by row using previous row

        Time: O(numRows^2) - nested loops
        Space: O(numRows^2) - store all rows
        """

        result = []

        for i in range(numRows):
            # Create new row with all 1s
            row = [1] * (i + 1)

            # Fill middle elements using previous row
            for j in range(1, i):
                row[j] = result[i-1][j-1] + result[i-1][j]

            # Add completed row to result
            result.append(row)

        return result
