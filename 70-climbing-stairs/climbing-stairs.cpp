class Solution {
public:
/// Same like fibonacci in dynamic
    int climbStairs(int n) {
        int dp[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        return climbStairshelper(n,dp);
    }
    
    int climbStairshelper(int n, int dp[]) {
        if(n==1 || n==2) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n]=climbStairshelper(n-1,dp)+climbStairshelper(n-2,dp);
        return climbStairshelper(n-1,dp)+climbStairshelper(n-2,dp);

    }
};