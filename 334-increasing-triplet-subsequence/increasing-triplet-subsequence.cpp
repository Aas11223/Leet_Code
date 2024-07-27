class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i-1]<nums[i]<nums[i+1]) return true;
        //     i++;
        // }
        // return false;
        int first=INT_MAX;
        int second=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=first) first=nums[i];
            else if(nums[i]<=second) second=nums[i];
            else return true;
        }
        return false;
    }
};