class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        # Step 1: Sort array to use two pointers and handle duplicates
        nums.sort()
        result = []
        n = len(nums)

        # Step 2: Fix first number, use two pointers for other two
        for i in range(n - 2):
            # Skip duplicate values for first number to avoid duplicate triplets
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            # If smallest number > 0, sum can't be 0. Early exit
            if nums[i] > 0:
                break

            left, right = i + 1, n - 1
            target = -nums[i] # We need nums[left] + nums[right] = -nums[i]

            # Two pointer scan
            while left < right:
                current_sum = nums[left] + nums[right]

                if current_sum == target:
                    # Found a valid triplet
                    result.append([nums[i], nums[left], nums[right]])

                    # Skip duplicates for left and right pointers
                    while left < right and nums[left] == nums[left + 1]:
                        left += 1
                    while left < right and nums[right] == nums[right - 1]:
                        right -= 1

                    # Move both pointers
                    left += 1
                    right -= 1
                elif current_sum < target:
                    # Sum too small, move left to increase sum
                    left += 1
                else:
                    # Sum too large, move right to decrease sum
                    right -= 1

        return result
