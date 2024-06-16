class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k) count++;
        //     }
        // }
        // return count;
        unordered_map<int,int> m;
        int ans=0;
        int sum=0;
        m[sum]++;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int find=sum-k;
            if(m.find(find) != m.end()) ans+=m[find];
            m[sum]++;
        }
        return ans;
    }
};