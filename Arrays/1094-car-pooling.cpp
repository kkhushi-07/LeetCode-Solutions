class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1002, 0); // Locations are bounded between 0 and 1000

        for (const auto& trip : trips) {
            int numPassengers = trip[0];
            int from = trip[1];
            int to = trip[2];

            diff[from] += numPassengers;   // Passengers picked up
            diff[to] -= numPassengers;     // Passengers dropped off
        }

        int currentPassengers = 0;
        for (int i = 0; i <= 1000; i++) {
            currentPassengers += diff[i];
            if (currentPassengers > capacity) {
                return false;
            }
        }

        return true;
    }
};
