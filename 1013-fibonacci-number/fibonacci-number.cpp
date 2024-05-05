class Solution {
public:
    int fib(int n) {
        int dp[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        return fibhelper(n,dp);
    }

    int fibhelper(int n, int dp[]){
        if(n==0 || n==1) return n;

        if(dp[n] != -1) return dp[n];

        int a=fibhelper(n-1,dp);
        int b=fibhelper(n-2,dp);
        dp[n]=a+b;
        return a+b;
    }
};