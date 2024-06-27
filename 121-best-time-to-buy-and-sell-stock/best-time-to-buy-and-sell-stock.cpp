class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = 0;
        
        if (std::is_sorted(prices.rbegin(), prices.rend())) return 0;
        
        for (int i = 0; i < prices.size(); ++i) {
            mini = std::min(mini, prices[i]);
            maxi = std::max(maxi, prices[i] - mini);
        }
        
        return maxi;
    }
};