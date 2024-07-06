class Solution {
public:
//     // void helper (vector<int> nums,int index,vector<int> &ans){
//     //     if(index==nums.size()){
//     //         ans.push_back(nums[index]);
//     //         return;
//     //     }
//     //     helper(nums[index]+nums[index+1], index+1,ans);
//     //     helper(nums[index], index+1,ans);
//     // }
//     void helper(vector<int>& nums, int index,vector<int>& curr, vector<vector<int>> & res){
//         res.push_back(curr);
//         for(int i=0;i<nums.size();i++){
//             if(i>index && nums[i]==nums[i-1]) continue;
//             curr.push_back(nums[i]);
//             helper(nums,i+1,curr,res);
//             curr.pop_back();
//         }
        
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         // vector<int> ans;
//         // helper(nums,0,ans);
//         vector<int> curr;
//         vector<vector<int>> res;
//         helper(nums,0,curr,res);
//         return res;
//     }
// };

void helper(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(current);

    for (int i = index; i < nums.size(); i++) {
        // Skip duplicates
        if (i > index && nums[i] == nums[i - 1]) continue;

        // Include the current number in the subset
        current.push_back(nums[i]);

        // Recurse with the next index
        helper(nums, i + 1, current, result);

        // Backtrack by removing the current number
        current.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;

    // Sort the array to handle duplicates easily
    sort(nums.begin(), nums.end());

    helper(nums, 0, current, result);

    return result;
}
};