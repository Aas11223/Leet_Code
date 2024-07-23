class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
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