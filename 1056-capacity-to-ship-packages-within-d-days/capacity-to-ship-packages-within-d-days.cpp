class Solution {
public:
    bool canShipWithinDays(const std::vector<int>& weights, int days, int capacity) {
        int currentLoad = 0;
        int daysNeeded = 1;

        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                daysNeeded++;
                currentLoad = 0;
            }
            currentLoad += weight;
        }

        return daysNeeded <= days;
    }

    int shipWithinDays(std::vector<int>& weights, int days) {
        int left = *std::max_element(weights.begin(), weights.end());
        int right = std::accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canShipWithinDays(weights, days, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
