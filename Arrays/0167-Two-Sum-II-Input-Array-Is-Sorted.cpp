class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                // Question me 1-based index manga hai
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++; // sum chota hai to left badhao
            }
            else {
                right--; // sum bada hai to right ghatao
            }
        }
        return {}; // kabhi nahi aayega, guarantee hai solution hoga
    }
};
