class Solution {
public:
    int pathsum(int i,int j,int n,int m,vector<vector<int>> &dp)
    {
        if(i>=n or j>=m) return 0;
        if(i==n-1 and j==m-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int right=pathsum(i+1,j,n,m,dp);
        int down=pathsum(i,j+1,n,m,dp);
        return dp[i][j]=right+down;
    }
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int k=pathsum(0,0,n,m,dp);
        return k;
    }
};
