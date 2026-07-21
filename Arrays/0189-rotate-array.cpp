class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Boundary check

        // Step 1: Poora array reverse karo
        reverse(nums.begin(), nums.end());

        // Step 2: Pehle k elements reverse karo
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Baaki bache elements reverse karo
        reverse(nums.begin() + k, nums.end());
    }
};
