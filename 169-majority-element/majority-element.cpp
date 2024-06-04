class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    for(int i=0;i<nums.size();i++){
    //     int count=0;
    //     if(nums[i]==nums[i+1]){
    //         count=count+1;
    //     }
    //     if(count > nums.size()/2) return nums[i];
    //    } 
    //    return -1;

        unordered_map<int, int> countMap;
        int majorityCount = nums.size() / 2;

        for (int num: nums) {
            countMap[num]++;
            if (countMap[num] > majorityCount) {
                return num;
            }
        }

        // In case there is no majority element which is theoretically impossible
        // for this problem since we are guaranteed that a majority element always exists.
        return -1;
    }
};