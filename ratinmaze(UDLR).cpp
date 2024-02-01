    void ratinmaze(int i,int j,vector<vector<int>>&m,int n,string s,vector<string>&v, vector<vector<int>> vis)
    {
        if(i<0 or i>n-1 or j<0 or j>n-1 or m[i][j]==0 or vis[i][j]!=-1) return;
        if(i==n-1 and j==n-1)
        {
            v.push_back(s);
            return;
        }
        vis[i][j]=1;
        ratinmaze(i-1,j,m,n,s+'U',v,vis);
        ratinmaze(i+1,j,m,n,s+'D',v,vis);
        ratinmaze(i,j-1,m,n,s+'L',v,vis);
        ratinmaze(i,j+1,m,n,s+'R',v,vis);
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>v;
        string s="";
        vector<vector<int>> vis(n, vector<int>(n, -1));
        ratinmaze(0,0,m,n,s,v, vis);
        return v;
    }
