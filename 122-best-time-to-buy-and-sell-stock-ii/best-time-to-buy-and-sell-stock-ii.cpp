class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int n=prices.size()-1;
        // int mini=INT_MAX;
        // int maxi=0;
        // int ans=0;
        // if(std::is_sorted(prices.rbegin(),prices.rend())) return 0;
        // else if(std::is_sorted(prices.begin(),prices.end())) return prices[n]-prices[0];
        // for(int i=0;i<prices.size();i++){
        //     mini=std::min(mini,prices[i]);
        //     if(prices[i]>prices[i+1]){
        //         int m=prices[i+1]-prices[i];
        //         ans+=m;
        //     }
        // }
        // return ans;
        int maxProfit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        
        return maxProfit;
    }
};