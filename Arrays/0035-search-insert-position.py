class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        # Initialize left and right pointers for binary search
        left = 0
        right = len(nums) - 1

        # Run binary search while search space is valid
        while left <= right:
            # Calculate mid index to avoid overflow
            mid = left + (right - left) // 2

            # If target found, return its index
            if nums[mid] == target:
                return mid
            # If target is greater, search in right half
            elif nums[mid] < target:
                left = mid + 1
            # If target is smaller, search in left half
            else:
                right = mid - 1

        # If target not found, left pointer is the insert position
        # Because loop ends when left > right, left points to first element >= target
        return left
