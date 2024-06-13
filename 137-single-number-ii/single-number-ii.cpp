class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;
        for (int i=0;i<nums.size();i++) {
            // If num is seen a second time, add it to `twos`
            twos= twos |(ones & nums[i]);
            // If num is seen a first time, add it to `ones`
            ones =ones^ nums[i];
            // If num is seen a third time, remove it from `ones` and `twos`
            int threes = ones & twos;
            ones &= ~threes;
            twos &= ~threes;
        }
        return ones;

    }
};