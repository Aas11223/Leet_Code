class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //  int max_ele=arr[0];
        //  int chunk=0;
        //  for(int i=0;i<arr.size();i++){
        //     max_ele=max(max_ele,arr[i]);
        //     if(max_ele==i) chunk++;
        //  }
        //  return chunk;
        int max_ele=arr[0];
        int count=0;
        for(int i=0;i<arr.size();i++){
            max_ele=max(max_ele,arr[i]);
            if(max_ele==i) count++;
        }
        return count;
    }
};