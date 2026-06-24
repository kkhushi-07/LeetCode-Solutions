class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        
        for(int i = 0; i < accounts.size(); i++) { // har customer
            int currentWealth = 0;
            for(int j = 0; j < accounts[i].size(); j++) { // uske saare banks
                currentWealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, currentWealth); // max update karo
        }
        return maxWealth;
    }
};
