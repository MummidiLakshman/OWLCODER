  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node,vector<int>&k,vector<int>&vis,vector<int>adj[])
    {
        vis[node]=1;
        k.push_back(node);
        for(auto it:adj[node])
        {
            if(!vis[it]) dfs(it,k,vis,adj);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        vector<int>k;
        dfs(0,k,vis,adj);
        return k;
    }
