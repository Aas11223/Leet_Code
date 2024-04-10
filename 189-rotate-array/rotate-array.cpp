class Solution {
public:

    void rev(vector<int>& nums, int start, int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    
    void rotate(vector<int>& nums, int k){
        k=k%nums.size();
        // Since done rotate array to left so the Q is of right 
        rev(nums,0,nums.size()-1);// So rotate it to right  
        rev(nums,0,k-1); // apply now same logic for did in left 
        rev(nums,k,nums.size()-1);
    }
};