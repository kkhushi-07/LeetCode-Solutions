class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0]; // Maximum sum track karne ke liye
        int current_sum = 0;      // Running sum

        for (int num : nums) {
            current_sum += num;
            
            // Ab tak ka sabse bada sum update karo
            max_so_far = max(max_so_far, current_sum);

            // Agar sum negative ho gaya, toh reset kar do
            if (current_sum < 0) {
                current_sum = 0;
            }
        }

        return max_so_far;
    }
};
