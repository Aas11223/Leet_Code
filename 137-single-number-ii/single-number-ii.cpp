class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;
        for (int num : nums) {
            // If num is seen a second time, add it to `twos`
            twos |= ones & num;
            // If num is seen a first time, add it to `ones`
            ones ^= num;
            // If num is seen a third time, remove it from `ones` and `twos`
            int threes = ones & twos;
            ones &= ~threes;
            twos &= ~threes;
        }
        return ones;

    }
};