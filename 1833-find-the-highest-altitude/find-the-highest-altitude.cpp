class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // vector<int> rt(gain.size()+1);
        // int maxi=INT_MIN;
        // //rt.size()=gain.size()+1;
        // rt[0]=0;
        // for(int i=0;i<gain.size();i++){
        //     rt[i+1]=rt[i]+gain[i];
        //     rt.push_back(rt[i+1]);
        //     maxi=max(maxi,rt[i]);
        // }
        // return maxi;
        int maxi=0;
        int currAlt=0;
        for(int i=0;i<gain.size();i++){
            currAlt+=gain[i];
            maxi=max(maxi,currAlt);
        }
        return maxi;
    }
};