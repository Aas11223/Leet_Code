// class Solution {
// public:
//     vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int> set1(nums1.begin(),nums1.end());
//         unordered_set<int> set2(nums2.begin(),nums2.end());
//         vector<vector<int>> ans(2);
//         for(int i=0;i<nums1.size();i++){
//             if(set2.find(nums1[i])==set2.end()) ans[0].push_back(nums1[i]);
//         }
//         for(int j=0;j<nums2.size();j++){
//             if(set1.find(nums2[j])==set1.end()) ans[1].push_back(nums2[j]);
//         }
//         return ans;
//     }
// };
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count1, count2;
        vector<vector<int>> ans(2);

        // Count occurrences in nums1
        for (int i = 0; i < nums1.size(); ++i) {
            count1[nums1[i]]++;
        }

        // Count occurrences in nums2
        for (int i = 0; i < nums2.size(); ++i) {
            count2[nums2[i]]++;
        }

        // Find elements in nums1 that are not in nums2
        for (int i = 0; i < nums1.size(); ++i) {
            int num = nums1[i];
            if (count2.find(num) == count2.end() && count1[num] > 0) {
                ans[0].push_back(num);
                count1[num] = 0; // Ensure we only add the element once
            }
        }

        // Find elements in nums2 that are not in nums1
        for (int i = 0; i < nums2.size(); ++i) {
            int num = nums2[i];
            if (count1.find(num) == count1.end() && count2[num] > 0) {
                ans[1].push_back(num);
                count2[num] = 0; // Ensure we only add the element once
            }
        }

        return ans;
    }
};
