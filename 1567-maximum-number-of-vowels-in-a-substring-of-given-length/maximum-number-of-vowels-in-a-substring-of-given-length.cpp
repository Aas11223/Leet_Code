class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0, ans = 0, window = 0;
        vector<bool> isVowel(128, false);

        // Define which characters are vowels
        isVowel['a'] = isVowel['e'] = isVowel['i'] = isVowel['o'] = isVowel['u'] = true;

        for (int right = 0; right < s.size(); ++right) {
            // Add s[right] to curr if it's a vowel
            if (isVowel[s[right]]) {
                window++;
            }

            // Maintain window size of k
            if (right >= k - 1) {
                // Update ans with the maximum number of vowels found
                ans = max(ans, window);

                // Remove s[left] from curr if it's a vowel
                if (isVowel[s[left]]) {
                    window--;
                }
                // Move left pointer forward to shrink the window
                left++;
            }
        }

        return ans;
    }
};
