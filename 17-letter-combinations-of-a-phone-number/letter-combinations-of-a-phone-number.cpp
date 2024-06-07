class Solution {
public:
    vector<string> keys={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz",};
    vector<string> ans;

    void helper(string digits,int i,string temp){
        if(i==digits.size()){
            ans.push_back(temp);
            return;
        }
        
        int digit = digits[i] - '0';
        for(int j=0;j<keys[digit].size();j++){
            helper(digits,i+1,temp+keys[digit][j]);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        helper(digits,0,"");
        return ans;
    }
};