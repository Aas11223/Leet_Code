class Solution {
public:
void helper(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    //vector<vector<int>>& result means vector inside a vector
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