class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int column = grid[0].size();
        int row = grid.size();
        vector<int> dp(column);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(i==0)
                {
                    if(j==0)
                        dp[j]=grid[0][0];
                    else
                        dp[j]=dp[j-1]+grid[0][j];
                }
                else if(j==0)
                    dp[0]=dp[0]+grid[i][0];
                else
                    dp[j]=min(dp[j],dp[j-1])+grid[i][j];
            }
        }
        return dp[column-1];
    }
};