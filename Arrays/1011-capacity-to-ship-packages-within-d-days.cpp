class Solution {
private:
    bool canShip(vector<int>& weights, int capacity, int days) {
        int daysNeeded = 1;
        int currentWeight = 0;

        for (int weight : weights) {
            if (currentWeight + weight > capacity) {
                daysNeeded++;
                currentWeight = weight; // Start a new day
            } else {
                currentWeight += weight;
            }
        }

        return daysNeeded <= days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for (int w : weights) high += w;

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, mid, days)) {
                ans = mid;        // Valid capacity, try finding a smaller one
                high = mid - 1;
            } else {
                low = mid + 1;    // Capacity too small, increase it
            }
        }

        return ans;
    }
};
