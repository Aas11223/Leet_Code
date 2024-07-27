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
            if(nums[i]<=first) first=nums[i]; // Update first if num is smaller or equal
            else if(nums[i]<=second) second=nums[i]; // Update second if num is smaller or equal
            // If num is greater than both first and second, we have an increasing triplet
            else return true;
        }
        return false;
    }
};