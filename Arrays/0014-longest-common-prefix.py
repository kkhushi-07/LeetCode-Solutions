class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        # Edge case: empty list
        if not strs:
            return ""

        # Take first string as reference prefix
        prefix = strs[0]

        # Compare prefix with each string and shrink it
        for s in strs[1:]:
            # Keep reducing prefix until it matches start of s
            while not s.startswith(prefix):
                prefix = prefix[:-1]
                if not prefix:
                    return ""

        return prefix
