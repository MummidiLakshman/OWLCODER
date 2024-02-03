class Solution {
public:
    int pathsum(int i,int j,vector<vector<int>>&grid,int n,int m, vector<vector<int>> &dp)
    {
        if(i>=n or j>=m) return INT_MAX;
        if(i==n-1 and j==m-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid[i][j]+min(pathsum(i+1,j,grid,n,m,dp),pathsum(i,j+1,grid,n,m,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int s=0;
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int k=pathsum(0,0,grid,n,m, dp);
        return k;
    }
};
