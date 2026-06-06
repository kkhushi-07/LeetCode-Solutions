class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]

        Problem:
        Given an integer array 'digits' representing a large number.
        Each element is a digit, from most significant to least significant.
        Increment the number by 1 and return the result as array.

        Key Concept:
        1. Start from last digit and add 1
        2. Handle carry: if digit becomes 10, set to 0 and carry = 1
        3. If all digits are 9, we need to add a new digit at start: [9,9,9] -> [1,0,0,0]
        4. Time: O(n), Space: O(1) except output
        """

        n = len(digits)

        # Traverse from last digit to first
        for i in range(n - 1, -1, -1):
            # Add 1 to current digit
            digits[i] += 1

            # If no carry needed, return result
            if digits[i] < 10:
                return digits

            # If digit becomes 10, set to 0 and continue loop for carry
            digits[i] = 0

        # If we reach here, all digits were 9
        # Example: [9,9,9] -> [0,0,0], need to add 1 at start
        return [1] + digits
