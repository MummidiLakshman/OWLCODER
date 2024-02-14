  public:
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>>k(V);
        for(auto it:edges)
        {
            k[it.first].push_back(it.second);
            k[it.second].push_back(it.first);
        }
       // gp(0,k,edges);
        return k;
        
    }
