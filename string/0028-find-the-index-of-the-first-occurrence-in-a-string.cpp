class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        if (m == 0) return 0;
        if (n < m) return -1;

        // Sliding window / Substring Search
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) return i; // Pattern matched completely
        }

        return -1;
    }
};
