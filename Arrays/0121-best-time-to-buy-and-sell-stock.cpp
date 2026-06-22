class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for(int i = 0; i < prices.size(); i++) {
            // Ab tak ka sabse sasta price update karo
            if(prices[i] < minPrice) {
                minPrice = prices[i];
            }
            // Aaj bechne par kitna profit hoga?
            else if(prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;
            }
        }
        return maxProfit;
    }
};
