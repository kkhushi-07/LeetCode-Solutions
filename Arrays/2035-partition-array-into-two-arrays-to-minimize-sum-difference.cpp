class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n = nums.size() / 2;
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        vector<vector<int>> left(n + 1), right(n + 1);

        // Generate all subset sums for left and right halves
        for (int mask = 0; mask < (1 << n); mask++) {
            int sz = 0, lSum = 0, rSum = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    sz++;
                    lSum += nums[i];
                    rSum += nums[i + n];
                }
            }
            left[sz].push_back(lSum);
            right[sz].push_back(rSum);
        }

        // Sort right half subset sums for binary search
        for (int sz = 0; sz <= n; sz++) {
            sort(right[sz].begin(), right[sz].end());
        }

        int ans = INT_MAX;

        // Combine results using Binary Search
        for (int sz = 0; sz <= n; sz++) {
            for (int a : left[sz]) {
                int target = totalSum / 2 - a;
                auto& rList = right[n - sz];
                auto it = lower_bound(rList.begin(), rList.end(), target);

                if (it != rList.end()) {
                    ans = min(ans, abs(totalSum - 2 * (a + *it)));
                }
                if (it != rList.begin()) {
                    ans = min(ans, abs(totalSum - 2 * (a + *prev(it))));
                }
            }
        }

        return ans;
    }
};
