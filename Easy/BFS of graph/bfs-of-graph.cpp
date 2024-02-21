//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void BFS(int node,vector<int>adj[],vector<int>&v,vector<int>&vis)
    {
        queue<int>q;
        vis[node]=1;
        q.push(node);
        while(!q.empty())
        {
            int t=q.front();
            v.push_back(t);
            q.pop();
            for(auto nbr:adj[t])
            {
                if(!vis[nbr])
                {
                    q.push(nbr);
                    vis[nbr]=1;
                }
            }
        }
        
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>v;
        vector<int>vis(V+1,0);
        BFS(0,adj,v,vis);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends