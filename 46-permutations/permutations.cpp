class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& nums, int index){
        if(index==nums.size()) ans.push_back(nums);

        for(int i=index;i<nums.size();i++){
            //First swap of [1,2,3] between 1&2 i.e [2,1,3]
            swap(nums[index],nums[i]); 
            //recursive
            helper(nums,index+1);
            //Backytacking again from [2,1,3] backtrack to [1,2,3] and swap between 1&3 i.e [3,2,1]
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0);
        return ans;
    }
};
