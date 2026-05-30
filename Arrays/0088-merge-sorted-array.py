class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        Leetcode 88. Merge Sorted Array
        Merge nums2 into nums1 as one sorted array in-place.

        Approach: 3 pointers from end
        - p1 = last element of nums1's actual data
        - p2 = last element of nums2
        - p = last position of nums1
        Fill from back to avoid overwriting nums1 elements.

        Time: O(m + n), Space: O(1)
        """
        p1 = m - 1 # Last index of nums1's elements
        p2 = n - 1 # Last index of nums2
        p = m + n - 1 # Last index of nums1's total space

        # Compare from back and fill larger element
        while p1 >= 0 and p2 >= 0:
            if nums1[p1] > nums2[p2]:
                nums1[p] = nums1[p1]
                p1 -= 1
            else:
                nums1[p] = nums2[p2]
                p2 -= 1
            p -= 1

        # If nums2 has remaining elements, copy them
        # nums1's remaining elements are already in place
        while p2 >= 0:
            nums1[p] = nums2[p2]
            p2 -= 1
            p -= 1

        # Return for testing. LeetCode modifies nums1 in-place
        return nums1
