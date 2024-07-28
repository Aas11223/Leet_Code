class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ans(nums.size(),1);
        // int prefixProd=1;
        // int suffixProd=1;
        // for(int i=0;i<nums.size();i++){
        //     ans[i]=prefixProd;
        //     prefixProd*=nums[i];
        // }
        // for(int i=nums.size()-1;i>=0;i--){
        //     ans[i]*=suffixProd;
        //     suffixProd*=nums[i];
        // }
        // return ans;
        vector<int> ans(nums.size(),1);
        int pre=1;
        int suf=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=pre;
            pre*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=suf;
            suf*=nums[i];
        }
        return ans;
    }
};