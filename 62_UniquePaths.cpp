class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> dp(n+1,0);
        dp[1]=1;
        for(int i=0;i<m;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                dp[j]=dp[j-1]+dp[j];
            }
        }
        return dp.back();
    }
};
