class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        
        // Step 1: Poore array ka total sum nikal lo
        for (int num : nums) {
            totalSum += num;
        }

        int leftSum = 0;

        // Step 2: Array par traverse karke check karo
        for (int i = 0; i < nums.size(); i++) {
            // Right sum nikalne ka formula
            int rightSum = totalSum - leftSum - nums[i];

            // Agar left sum aur right sum barabar hain, toh yahi pivot index hai
            if (leftSum == rightSum) {
                return i;
            }

            // Agle index ke liye leftSum ko update kar do
            leftSum += nums[i];
        }

        // Agar koi pivot index nahi mila
        return -1;
    }
};
