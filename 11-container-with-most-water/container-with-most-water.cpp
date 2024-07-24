class Solution {
public:
    int maxArea(vector<int>& height) {
        // int left=0, right=height.size()-1;
        // int maxi=0;

        // while(left<right){
        //     maxi=max(maxi,(right-left)*min(height[left],height[right]));
        //     if(height[left]<height[right]) left++;
        //     else right--;
        // }
        // return maxi;
        int left=0;
        int right=height.size()-1;
        int maxi=0;
        for(int i=0;i<height.size();i++){
            while(left<right){
                maxi=max(maxi,(right-left)*min(height[left],height[right]));
                if(height[left]<height[right]) left++;
                else right--;
            }
        } 
        return maxi;
    }
};