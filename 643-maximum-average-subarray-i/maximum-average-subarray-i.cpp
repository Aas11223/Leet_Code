class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // double ans;
        // double maxi=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i;j<k;j++){
        //         ans=nums[j]/k;
        //         maxi=max(maxi,ans);
        //     }
        // }
        // return maxi;
        // double ans=0;
        // double window=0;
        // for(int i=0;i<k;i++){
        //     window+=nums[i];
        // }
        // ans=window/k;
        // for(int right=k;right<nums.size();right++){
        //     window+=nums[right]-nums[right-k];
        //     ans=max(ans,window/k);
        // }
        // return ans;
        double ans=0;
        double window=0;
        for(int i=0;i<k;i++){
            window+=nums[i];
        }
        ans=window/k;
        for(int right=k;right<nums.size();right++){
            window+=nums[right]-nums[right-k];
            ans=max(ans,window/k);
        }
        return ans;
    }
};