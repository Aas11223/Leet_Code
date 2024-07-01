class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // unordered_map <string,int> m;
        // vector<int> ans(0);
        // for(int i=0;i<p.size();i++){
        //     for(int j=0;j<p.size();j++){
        //         if(p[i]==s[j]){
        //             ans.push_back(i);
        //         }
        //     }
        // }
        // return ans;
        vector<int> ans;
        if (s.size() < p.size()) return ans;
        
        vector<int> p_count(26, 0), s_count(26, 0);
        for (char c : p) {
            p_count[c - 'a']++;
        }
        
        for (int i = 0; i < s.size(); i++) {
            s_count[s[i] - 'a']++;
            
            if (i >= p.size()) {
                s_count[s[i - p.size()] - 'a']--;
            }
            
            if (p_count == s_count) {
                ans.push_back(i - p.size() + 1);
            }
        }
        
        return ans;
    }
};