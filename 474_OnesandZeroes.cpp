class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        //初始化一个二维数组
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(auto str:strs)
        {
            int ones=0,zeros=0;
            for(auto c:str)
                (c=='0')?zeros++:ones++;
            for(int i=m;i>=zeros;i--)
            {
                for(int j=n;j>=ones;j--)
                {
                    dp[i][j]=max(dp[i][j],dp[i-zeros][j-ones]+1);
                }
            }
        }
        return dp[m][n];
    }
};