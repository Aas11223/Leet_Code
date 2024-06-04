class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        int a=nums.size()/3;
        vector<int> result;
        for(int i:nums){
            count[i]++;
            //if(count[i]>a) return i;
        }
        for (auto& [key, value] : count) {
            if (value > a) {
                result.push_back(key);
            }
        }
        //return -1; 
        return result;
    }
};