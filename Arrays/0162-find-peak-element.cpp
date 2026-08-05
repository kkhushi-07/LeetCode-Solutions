class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // If mid is less than next element, peak lies on the right
            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;
            } 
            // Peak lies on the left or at mid
            else {
                right = mid;
            }
        }

        return left;
    }
};
