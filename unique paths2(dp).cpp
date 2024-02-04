class Solution {
public:
    int unipath(int i,int j,int n,int m,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp)
    {
        if(i>n-1 or j>m-1 or obstacleGrid[i][j]==1) return 0;
        if(i==n-1 and j==m-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int right=unipath(i,j+1,n,m,obstacleGrid,dp);
        int down=unipath(i+1,j,n,m,obstacleGrid,dp);
        return dp[i][j]=right+down;;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 or obstacleGrid[n-1][m-1]==1)
        {
            return 0;
        }
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int k=unipath(0,0,n,m,obstacleGrid,dp);
        return k;
    }
};
