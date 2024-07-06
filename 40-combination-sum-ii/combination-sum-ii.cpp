class Solution {
public:
//     vector<vector<int>> ans;
//     void helper(vector<int>& candidates, int target, int ind,vector<int> temp){
//         if(target==0){
//             ans.push_back(temp);
//             return;
//         }
//         for(int i=ind;i<candidates.size();i++){
//             if(candidates[i]>target) break; // Don't move ahead
//             if(i>ind && candidates[i]==candidates[i-1]) continue;

//             temp.push_back(candidates[i]);
//             helper(candidates,target-candidates[i],i+1,temp);
//             temp.pop_back(); 
//         }
//     }
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<int> temp;
//         sort(candidates.begin(),candidates.end());
//         helper(candidates,target,0,temp);
//         return ans;
//     }
// };
void helper(vector<int>& candidates, int target,int index,vector<vector<int>>& ans, vector<int>& curr){
    if(target==0){
        ans.push_back(curr);
        return;
    }
    if(target<0) return;
    for(int i=index;i<candidates.size();i++){
        if(candidates[i]>target) break;
        if(i>index && candidates[i]==candidates[i-1]) continue; // If commented Output
//[[1,1,6],[1,2,5],[1,7],[1,2,5],[1,7],[2,6]]
//Expected
//[[1,1,6],[1,2,5],[1,7],[2,6]]
        curr.push_back(candidates[i]);
        helper(candidates,target-candidates[i],i+1,ans,curr);
        curr.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
    vector<vector<int>> ans;
    vector<int> curr;
    sort(candidates.begin(),candidates.end());
    helper(candidates,target,0,ans,curr);
    return ans;
}
};