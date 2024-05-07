class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //     vector <int> ans;
    //     for(int i=1;i<nums.size();i++){
    //         ans[i]=nums[i-1]*nums[i];
    //     }
    //     return max(ans[]);
    // }
    // int maxProd =0; // Initialize maxProd to the minimum possible value
    // if(nums.size()==1) return nums[0];
    // else{
    //     for (int i = 1; i < nums.size(); i++) {
    //     int product = nums[i - 1] * nums[i];
    //     maxProd = max(maxProd, product);
    // }
    // return maxProd;
    // }
    //  if (nums.size() == 1) return nums[0]; // Return the only element if nums has only one element
    
    // int maxProd = nums[0] * nums[1]; // Initialize maxProd with the product of the first two elements
    
    // for (int i = 1; i < nums.size() - 1; i++) { // Iterate from the second element onwards
    //     int product = nums[i] * nums[i + 1]; // Calculate the product of current and next elements
    //     maxProd = std::max(maxProd, product); // Update maxProd with the maximum of itself and the current product
    // }
    
    // return maxProd;
    // }

    int max_prod = nums[0];
    int min_prod = nums[0];
    int max_so_far = nums[0];
    
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < 0)
            swap(max_prod, min_prod);
        
        max_prod = max(nums[i], max_prod * nums[i]);
        min_prod = min(nums[i], min_prod * nums[i]);
        
        max_so_far = max(max_so_far, max_prod);
    }
    
    return max_so_far;
    }
};