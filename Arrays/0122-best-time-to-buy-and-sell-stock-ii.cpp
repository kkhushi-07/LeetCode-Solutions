class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            // Add profit whenever there is a price rise
            if (prices[i] > prices[i - 1]) {
                totalProfit += prices[i] - prices[i - 1];
            }
        }

        return totalProfit;
    }
};
