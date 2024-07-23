class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        //int maxi=0;
        // for(int i=0;i<candies.size();i++){
        //     int a1=candies[i]+extraCandies;
        //     int maxi=max(candies[i],a1);
        //     if(maxi==a1) return true;
        // }
        // return false;
        vector<bool> ans;
        int a;
        int maxi;
        for(int i=0;i<candies.size();i++){
            a=extraCandies+candies[i];
            maxi=*std::max_element(candies.begin(),candies.end());
            if(maxi<=a) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};