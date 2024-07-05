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
    // vector<int> ans(nums1.size(),-1);
    // for(int i=0;i<nums1.size();i++){
    //     for(int j=0;j<nums2.size();j++){
    //         if(nums1[i]==nums2[j]){
    //             if(j==nums2.size()-1) break;
    //             if(nums2[j]<nums2[j+1]){
    //                 ans[i]=nums2[j+1];
    //                 break;
    //             } else j++;
    //         }
    //     }
    // }
    // return ans;
    }
};
