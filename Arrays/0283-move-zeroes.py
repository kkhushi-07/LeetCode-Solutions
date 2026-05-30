class Solution(object):
    def moveZeroes(self, nums):
        """
        Leetcode 283. Move Zeroes
        Move all 0's to the end while maintaining relative order of non-zero elements.
        Time: O(n), Space: O(1)
        """
        j = 0
        # Move all non-zero elements to the front using 2 pointers
        for i in range(len(nums)):
            if nums[i]!= 0:
                nums[i], nums[j] = nums[j], nums[i]
                j += 1

        # Return modified array for testing. LeetCode doesn't require return as it modifies in-place
        return nums
