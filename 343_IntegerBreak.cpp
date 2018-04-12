class Solution {
public:
    int integerBreak(int n) {
        if(n<4)
            return n-1;
        vector<int> dp(n+1,0);
        for(int i=1;i<4;i++)
            dp[i] = i;
        for(int i=4;i<=n;i++)
        {
            for(int j=1;j<=n/2;j++)
            {
                int tmp = dp[j]*dp[i-j];
                dp[i] = max(tmp,dp[i]); 
            }
        }
        return dp[n];
    }
};