class Solution {
private:
    bool canEatInTime(vector<int>& piles, int speed, int h) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + speed - 1) / speed; // Ceiling division
        }
        return hours <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canEatInTime(piles, mid, h)) {
                ans = mid;        // Save current valid speed
                high = mid - 1;   // Try to find a smaller valid speed
            } else {
                low = mid + 1;    // Speed is too slow, increase it
            }
        }

        return ans;
    }
};
