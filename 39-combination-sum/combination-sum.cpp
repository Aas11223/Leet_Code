class Solution {
public:
    //vector<vector<int>> ans;
    // void helper(vector<int>& candidates, int target, int tempAns, int index){
    //     if(index==candidates.size()){
    //         if(tempAns==target){
    //             ans.push_back(candidates[index]);
    //             return;
    //         }
    //     }
    //     //inclusion
    //     tempAns=candidates[index]+tempAns;
    //     //tempAns.push_back(candidates)
    //     helper(candidates,target,tempAns,index);
    //     tempAns=candidates[index]-tempAns;
    //     //exclusion
    //     helper(candidates,target,tempAns,index+1);
    // }
    vector<vector<int>> ans;
    void helper(vector<int>& candidates, int target,int i,int currSum, vector<int> temp){
        if(currSum>target) return; //bounding condition
        if(i==candidates.size()){ //base case
            if(currSum==target) ans.push_back(temp);
            return;
        }
        currSum+=candidates[i];//Inclusion
        temp.push_back(candidates[i]);
        helper(candidates,target,i,currSum,temp);
        currSum-=candidates[i];
        temp.pop_back();
        helper(candidates,target,i+1,currSum,temp);//Exclusion
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(candidates,target,0,0,temp);
        return ans;
    }
};