class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        // vector<int>si;
        // vector<int>sd;
        // int ans=1;
        // for(int i=0;i<nums.size()-1;i++){
        //     if( (nums[i+1]>=nums[i]) ){
        //         si.push_back(nums[i]);
        //     }else{
        //         sd.push_back(nums[i]);
        //     } 
        // }
        // ans=max(si.size(),sd.size());
        // return ans;

        int ans=1;
        int inc_len=1;
        int dec_len=1;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                inc_len++;
                dec_len=1;
            }else if(nums[i+1]<nums[i]){
                dec_len++;
                inc_len=1;
            }else{
                inc_len=1;
                dec_len=1;
            }
            ans=max(ans,max(inc_len,dec_len));
        }
        return ans;
    }
};