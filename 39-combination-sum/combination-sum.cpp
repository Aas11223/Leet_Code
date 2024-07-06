class Solution {
public:
    // vector<vector<int>> ans;
    // void helper(vector<int>& candidates, int target,int i,int currSum, vector<int> temp){
    //     if(currSum>target) return; //bounding condition
    //     if(i==candidates.size()){ //base case
    //         if(currSum==target) ans.push_back(temp);
    //         return;
    //     }
    //     currSum+=candidates[i];//Inclusion
    //     temp.push_back(candidates[i]);
    //     helper(candidates,target,i,currSum,temp);
    //     currSum-=candidates[i];
    //     temp.pop_back();
    //     helper(candidates,target,i+1,currSum,temp);//Exclusion
    // }
    void helper(vector<int>& candidates, int target,int index,vector<vector<int>>& ans,vector<int>& curr){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=index;i<candidates.size();i++){
            curr.push_back(candidates[i]);
            helper(candidates,target-candidates[i],i,ans,curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>> ans;
        vector<int> curr;
        helper(candidates,target,0,ans,curr);
        return ans;
    }
};