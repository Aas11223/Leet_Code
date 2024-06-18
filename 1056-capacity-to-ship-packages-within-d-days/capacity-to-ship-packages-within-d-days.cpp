class Solution {
public:
    bool canShipWithinDays(vector<int>& weights, int days, int capacity) {
        int load=0;
        int daysNeeded=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>capacity){
                daysNeeded++;
                load=0;
            }
            load+=weights[i];
        }
        return daysNeeded<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left=weights[0];
        for(int i=0;i<weights.size();i++){
            left=max(left,weights[i]);
        }
        int right=0;
        for(int i=0;i<weights.size();i++){
            right+=weights[i];
        }
        while(left<right){
            int mid=left+(right - left)/2;
            if (canShipWithinDays(weights, days, mid)) {
                right = mid;
            } 
            else {
                left = mid + 1;
            }
        }
        return left; 
    }
};
