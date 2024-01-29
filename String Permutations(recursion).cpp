    public:
    //Complete this function
    vector<string>v;
    void perm(int n,string S,string p,vector<int>&vis)
    {
        if(p.size()==n)
        {
            v.push_back(p);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                // p+=S[i];
                vis[i]=1;
                perm(n,S,p+S[i],vis);
                vis[i]=0;
            }
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        int n=S.size();
        vector<int>vis(n,0);
        
        string p="";
        perm(n,S,p,vis);
        sort(v.begin(),v.end());
        return v;
    }
