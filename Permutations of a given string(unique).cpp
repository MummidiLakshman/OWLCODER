	public:
	    map<string,int>mp;
	    void per(int n,string s,vector<int>&vis,string p)
	    {
	        if(p.size()==n)
	        {
	            if(mp[p]==0)
	            {
	                mp[p]++;
	            }
	            return;
	        }
	        for(int i=0;i<n;i++)
	        {
	            if(vis[i]==0)
	            {
	                vis[i]=1;
	                per(n,s,vis,p+s[i]);
	                vis[i]=0;
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    //vector<string>k;
		    vector<string>v;
		    int n=S.size();
		    vector<int>vis(n,0);
		    string p="";
		    per(n,S,vis,p);
		    for(auto it:mp)
		    {
		        v.push_back(it.first);
		    }
		    return v;
		}
