class Solution {

public:

vector<int> runningSum(vector<int>& nums) {

// Loop index 1 se shuru karenge kyunki index 0 ka sum wahi rahega

for (int i = 1; i < nums.size(); i++) {

// Agle element mein pichle element ka sum add kar do

nums[i] = nums[i] + nums[i - 1]; // Ya fir nums[i] += nums[i - 1];

}

return nums; // Modified array return kar do

}

};
