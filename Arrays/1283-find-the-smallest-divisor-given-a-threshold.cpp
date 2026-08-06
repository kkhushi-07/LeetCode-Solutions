class Solution {
private:
    bool isValid(vector<int>& nums, int divisor, int threshold) {
        int sum = 0;
        for (int num : nums) {
            sum += (num + divisor - 1) / divisor; // Ceiling division
            if (sum > threshold) return false;    // Early exit
        }
        return sum <= threshold;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isValid(nums, mid, threshold)) {
                ans = mid;        // Valid divisor, try finding a smaller one
                high = mid - 1;
            } else {
                low = mid + 1;    // Sum exceeded threshold, need a larger divisor
            }
        }

        return ans;
    }
};
