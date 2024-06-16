class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        // int count = 0;
        // int sum = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     sum = 0;
        //     // Consider each subarray starting from index i
        //     for (int j = i; j < nums.size();j++) {
        //         sum += nums[j];
        //         // If the sum equals k, increment count
        //         if (sum == k)
        //             count++;
        //     }
        // }
        
        // return count;
        int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k) count++;
            }
        }
        return count;
    }
    // int count=0;
    // int sum=0;

    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]==k){
    //         count=1;
    //         sum=1;
    //     }else{
    //         sum=0;
    //     }
    // }

    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]+nums[i+1]==k){
    //         count++;
    //         sum++;
    //     }
    // }
    // return count;
    // }
};