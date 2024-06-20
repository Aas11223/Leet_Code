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
    void combinationsum(vector<int>& candidates,int target,vector<int>&v,vector<vector<int>>&ans,int index){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=index;i<candidates.size();i++){
            v.push_back(candidates[i]);
            combinationsum(candidates,target-candidates[i],v,ans,i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // vector<int> temp;
        // helper(candidates,target,0,0,temp);
        // return ans;
        vector<vector<int>>ans;
        vector<int>v;
        combinationsum(candidates,target,v,ans,0);
        return ans;
    }
};