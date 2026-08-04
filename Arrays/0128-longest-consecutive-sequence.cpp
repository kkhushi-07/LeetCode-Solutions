class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxStreak = 0;

        for (int num : st) {
            // Check if 'num' is the start of a sequence
            if (st.find(num - 1) == st.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Expand the sequence forward
                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    currentStreak++;
                }

                maxStreak = max(maxStreak, currentStreak);
            }
        }

        return maxStreak;
    }
};
