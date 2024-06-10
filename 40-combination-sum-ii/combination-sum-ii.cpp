class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& candidates, int target, int ind,vector<int> temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(candidates[i]>target) break; // Don't move ahead
            if(i>ind && candidates[i]==candidates[i-1]) continue;

            temp.push_back(candidates[i]);
            helper(candidates,target-candidates[i],i+1,temp);
            temp.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0,temp);
        return ans;
    }
};