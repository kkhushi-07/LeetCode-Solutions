class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n + 1, 0);

        // Step 1: Mark range boundaries using Difference Array technique
        for (const auto& booking : bookings) {
            int first = booking[0] - 1; // 1-based to 0-based index
            int last = booking[1] - 1;
            int seats = booking[2];

            diff[first] += seats;
            diff[last + 1] -= seats;
        }

        // Step 2: Compute Prefix Sum to get actual seat counts
        vector<int> result(n, 0);
        int currentSeats = 0;
        for (int i = 0; i < n; i++) {
            currentSeats += diff[i];
            result[i] = currentSeats;
        }

        return result;
    }
};
