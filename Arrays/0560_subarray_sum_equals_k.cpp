class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixMap;
        
        // Base Case: Prefix sum 0 shuruat mein 1 baar dekha mana jata hai
        prefixMap[0] = 1;

        int current_sum = 0;
        int count = 0;

        for (int num : nums) {
            current_sum += num; // Current prefix sum

            // Check karo ki (current_sum - k) pehle kabhi aaya hai kya?
            if (prefixMap.find(current_sum - k) != prefixMap.end()) {
                count += prefixMap[current_sum - k];
            }

            // Current sum ki frequency map mein update kar do
            prefixMap[current_sum]++;
        }

        return count;
    }
};
