class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // string res="";
        // int gcdAns=0;
        // int i=0;
        // if(str1+str2 == str2+str1){
        //     gcdAns=gcd(str1.size(),str2.size());
        //     for(int i=0;i<gcdAns;i++){
        //         res+=str1[i];
        //     }
        // }
        // return res;
        string ans="";
        int gcdAns;
        if(str1+str2==str2+str1){
            gcdAns=gcd(str1.size(),str2.size());
            for(int i=0;i<gcdAns;i++){
                ans+=str2[i];
            }
        }
        return ans;
    }
};