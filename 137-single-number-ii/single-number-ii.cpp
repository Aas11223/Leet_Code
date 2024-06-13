class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int seenOnce=0, seenTwice=0;
        for(int i=0;i<nums.size();i++){ 
            seenOnce=(seenOnce ^ nums[i]) & (~seenTwice);// If seenOnce so I can't do seen Twice
            seenTwice=(seenTwice ^ nums[i]) & (~seenOnce);// If seenTwice so I can't do seenOnce because that number is removed from seenOnce and added to seenTwice 
        // If occured one more time (i.e seenThrice) so seenOnce will become zero
        }
        return seenOnce;
    }
};