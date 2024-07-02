class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum += nums[j];
        //         if(sum%k==0) count++;
        //     }
        // }
        // return count;
        std::unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; // To handle the case when a prefix sum itself is divisible by k

        int prefixSum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += nums[i];
            int n = prefixSum % k;

            // Adjust n to be non-negative
            if (n < 0) n += k;

            if (prefixSumCount.find(n) != prefixSumCount.end()) {
                count += prefixSumCount[n];
            }
            prefixSumCount[n]++;
        }

        return count;
    }
};