class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        // vector<int> first;
        // vector<int> sec;
        
        //     int middle_index = nums.size() / 2;
        //     for(int i=0;i<middle_index;i++){
        //         first.push_back(arr[i]);
        //         sort(first);
        //     }
        //     for(int i=middle_index+1;i<arr.size();i++){
        //         sec.push_back(arr[i]);
        //         sort(sec);
        //     }
         
         int max_ele=arr[0];
         int chunk=0;
         for(int i=0;i<arr.size();i++){
            max_ele=max(max_ele,arr[i]);
            if(max_ele==i) chunk++;
         }
         return chunk;
    }
};