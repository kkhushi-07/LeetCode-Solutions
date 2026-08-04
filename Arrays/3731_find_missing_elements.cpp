class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<int> ans;
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            // Check for missing integers between adjacent elements
            for (int missing = nums[i] + 1; missing < nums[i + 1]; ++missing) {
                ans.push_back(missing);
            }
        }
        
        return ans;
    }
};
