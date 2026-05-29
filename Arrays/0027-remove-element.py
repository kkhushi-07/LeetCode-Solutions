# LeetCode 27. Remove Element
# Link: https://leetcode.com/problems/remove-element/
# Time: O(n) | Space: O(1)
# Approach: Two Pointers

def removeElement(nums, val):
    k = 0 # Pointer for next position of non-val element
    for i in range(len(nums)):
        if nums[i]!= val:
            nums[k] = nums[i]
            k += 1
    return k
