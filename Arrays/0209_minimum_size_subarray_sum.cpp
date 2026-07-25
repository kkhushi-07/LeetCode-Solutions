class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int L = 0;
        int current_sum = 0;
        int min_len = INT_MAX;

        for (int R = 0; R < n; R++) {
            current_sum += nums[R]; // Window expand karo

            // Jaise hi condition satisfy ho, window shrink karo
            while (current_sum >= target) {
                min_len = min(min_len, R - L + 1); // Length record karo
                current_sum -= nums[L];            // Left element hatao
                L++;                              // Left boundary aage badhao
            }
        }

        return (min_len == INT_MAX) ? 0 : min_len;
    }
};
