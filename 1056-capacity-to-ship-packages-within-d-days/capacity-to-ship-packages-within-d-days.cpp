class Solution {
public:
    bool canShipWithinDays(vector<int>& weights, int days, int capacity) {
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

    int shipWithinDays(vector<int>& weights, int days) {
        // Calculate the maximum element manually
        int left = weights[0];
        for (int weight : weights) {
            if (weight > left) {
                left = weight;
            }
        }

        // Calculate the sum of elements manually
        int right = 0;
        for (int weight : weights) {
            right += weight;
        }

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
