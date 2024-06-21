// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> ans(nums1.size());
//        bool found=false;
//        for(int i=0;i<nums1.size();i++){
//         found=false;
//            for(int j=0;j<nums2.size();j++){
//                if(nums1[i]==nums2[j]) found =true;
//                if(found && nums2[j]>nums1[i]){
//                 ans[i]=nums2[j];
//                 break;
//                }
//            }
//        }
//        for(int i=0;i<ans.size();i++){
//         if(ans[i]==0) ans[i]=-1;
//        }
//        return ans;
//     }
// };
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> ans(nums1.size(), -1); // Initialize ans with size of nums1 and default value -1
       for(int i=0; i<nums1.size(); i++){
           bool found = false;
           for(int j=0; j<nums2.size(); j++){
               if(nums1[i] == nums2[j]) found = true;
               if(found==true && nums2[j] > nums1[i]){
                   ans[i] = nums2[j];
                   break;
               }
           }
       }
       return ans;
    }
};
