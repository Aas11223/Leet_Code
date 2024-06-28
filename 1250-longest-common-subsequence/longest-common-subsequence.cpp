class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
    int n = text2.size();
    
    // Create a 2D dp array with dimensions (m+1) x (n+1)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill the dp array
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // The length of the longest common subsequence will be in dp[m][n]
    return dp[m][n];
        // int count=0;
        // for(int i=0;i<text1.size();i++){
        //         for(int j=0;j<text2.size();j++){
        //             if(text1[i]==text2[j]) return text1.size();
        //             if(find(text1.begin(),text1.end(),text2[j] ) ) {
        //                 count++;
        //                 return count;
        //             }
        //         }
        // }
        // return 0; 
        
    }
};