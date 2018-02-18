class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int column = obstacleGrid.size();
        int size = obstacleGrid[0].size();
        vector<int> dp(size+1,0);
        dp[1]=1;
        for(int i=0;i<column;i++)
        {
            for(int j=1;j<size+1;j++)
            {
                if(obstacleGrid[i][j-1]==1)
                {
                    dp[j]=0;
                }
                else
                {
                    dp[j]=dp[j-1]+dp[j];
                }
            }
        }
        return dp.back();
    }
};
