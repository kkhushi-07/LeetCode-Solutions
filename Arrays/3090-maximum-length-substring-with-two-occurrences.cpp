#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumLengthSubstring(std::string s) {
        std::vector<int> count(26, 0);
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.length(); ++right) {
            count[s[right] - 'a']++;

            // Shrink window if any character appears more than twice
            while (count[s[right] - 'a'] > 2) {
                count[s[left] - 'a']--;
                left++;
            }

            maxLen = std::max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
