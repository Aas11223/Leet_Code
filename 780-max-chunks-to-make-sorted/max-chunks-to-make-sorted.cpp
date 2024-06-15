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
        int count=0;
        // vector<int>pref(arr.size());
        // pref[0]=arr[0];
        if(arr[0]==0)count++;
        for(int i=1;i<arr.size();i++){
            arr[i]=max(arr[i-1],arr[i]);
            if(arr[i]==i)count++;
        }
        return count;
    }
};