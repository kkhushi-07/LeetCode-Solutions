# Time Complexity: O(n) - We scan the array only once
# Space Complexity: O(1) - We modify array in-place, no extra space used

class Solution(object):
    def removeDuplicates(self, nums):
        # Edge Case: If array is empty, there are 0 unique elements
        if not nums: 
            return 0
        
        # 'last' points to the position of the last unique element found
        # All elements from index 0 to 'last' are unique and sorted
        last = 0 
        
        # Start loop from index 1 because nums[0] is already unique
        for i in range(1, len(nums)): 
            
            # If current element is different from the last unique element
            if nums[last]!= nums[i]: 
                last += 1 # Move 'last' pointer to next position
                nums[last] = nums[i] # Place the new unique element there
                
        # 'last' is an index, so total unique count is last + 1
        return last + 1


"""
EXPLANATION WITH EXAMPLE:

Problem: Remove duplicates from sorted array in-place.
Return count of unique elements 'k'. First k elements should be unique.

Example: nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]

STEP-BY-STEP DRY RUN:

Initial: last = 0, nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]

i=1: nums[1]=0, nums[last]=0 -> Same, skip
     nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4], last = 0

i=2: nums[2]=1, nums[last]=0 -> Different! 
     last = 1, nums[1] = 1
     nums = [0, 1, 1, 1, 1, 2, 2, 3, 3, 4], last = 1

i=3: nums[3]=1, nums[last]=1 -> Same, skip
i=4: nums[4]=1, nums[last]=1 -> Same, skip

i=5: nums[5]=2, nums[last]=1 -> Different!
     last = 2, nums[2] = 2
     nums = [0, 1, 2, 1, 1, 2, 2, 3, 3, 4], last = 2

i=6: nums[6]=2, nums[last]=2 -> Same, skip

i=7: nums[7]=3, nums[last]=2 -> Different!
     last = 3, nums[3] = 3
     nums = [0, 1, 2, 3, 1, 2, 2, 3, 3, 4], last = 3

i=8: nums[8]=3, nums[last]=3 -> Same, skip

i=9: nums[9]=4, nums[last]=3 -> Different!
     last = 4, nums[4] = 4
     nums = [0, 1, 2, 3, 4, 2, 2, 3, 3, 4], last = 4

Final: return last + 1 = 5
Final Array: [0, 1, 2, 3, 4, _, _, _, _, _]
First 5 elements are unique. Answer = 5

KEY IDEA: We use 'last' pointer to track where next unique element should go.
'i' pointer scans the whole array. If nums[i] is new, we put it at last+1.
"""
