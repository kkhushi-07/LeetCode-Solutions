class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        l, r = 0, len(nums) - 1

        while l <= r:
            mid = (l + r) // 2

            if nums[mid] == target:
                return mid

            # Check which side is sorted
            if nums[l] <= nums[mid]:
                # Left side sorted hai
                if nums[l] <= target < nums[mid]:
                    r = mid - 1 # target left me hai
                else:
                    l = mid + 1 # target right me hai
            else:
                # Right side sorted hai
                if nums[mid] < target <= nums[r]:
                    l = mid + 1 # target right me hai
                else:
                    r = mid - 1 # target left me hai

        return -1
