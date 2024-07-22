class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0; // Pointer for s
        
        // Iterate over t using a for loop
        for (int tIndex = 0; tIndex < t.size(); tIndex++) {
            if (sIndex < s.size() && s[sIndex] == t[tIndex]) {
                // Move to the next character in s
                sIndex++;
            }
        }
        
        // If we have traversed all characters of s
        return sIndex == s.size();
    }
};
