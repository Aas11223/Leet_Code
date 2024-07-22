class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     //if(nums.size()==1) nums;
        //     if(nums[i]==0){
        //         swap(nums[i],nums[i-1]);
        //         // nums[i-1]=nums[i];
        //         // nums[i+1]=nums[i];
        //         //return nums;
        //     }
        // }
        int lastNonZero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(i!=lastNonZero) swap(nums[i],nums[lastNonZero]);
                lastNonZero++;
            }
            
        }
    }
};

