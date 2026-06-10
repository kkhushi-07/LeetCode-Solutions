class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        # 2-pointer approach: start from both ends
        # Area = min(height[l], height[r]) * (r - l)
        # Move pointer with smaller height inward for max area

        l, r = 0, len(height) - 1
        max_water = 0

        while l < r:
            # Calculate current area
            h = min(height[l], height[r])
            w = r - l
            max_water = max(max_water, h * w)

            # Move the pointer with smaller height
            if height[l] < height[r]:
                l += 1
            else:
                r -= 1

        return max_water
