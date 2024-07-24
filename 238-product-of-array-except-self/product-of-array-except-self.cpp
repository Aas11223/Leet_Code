class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ans(nums.size());
        // for(int i=1;i<nums.size();i++){
        //     ans[0]=nums.begin()*nums.end();
        //     nums[i]=nums[i]--*nums[i]+++;
        //     ans.push_back(nums[i]);
        // }
        // return ans;
        int n = nums.size();
        std::vector<int> answer(n, 1);
        
        // Calculate prefix products
        int prefixProduct = 1;
        for (int i = 0; i < n; ++i) {
            answer[i] = prefixProduct;
            prefixProduct *= nums[i];
        }
        
        // Calculate suffix products and multiply with prefix products
        int suffixProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            answer[i] *= suffixProduct;
            suffixProduct *= nums[i];
        }
        
        return answer;
    }
};