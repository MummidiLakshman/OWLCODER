class Solution {
public:
    void comb(int i,int n,vector<int>&p,int k,vector<int>&v,vector<vector<int>>&ve)
    {
        if(i==n)
        {
            if(v.size()==k)
                ve.push_back(v);
            return;  
        }
        v.push_back(p[i]);
        if(v.size()<=k)
            comb(i+1,n,p,k,v,ve);
        v.pop_back();
        comb(i+1,n,p,k,v,ve);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        vector<vector<int>>ve;
        vector<int>p;
        for(int i=1;i<=n;i++)
        {
            p.push_back(i);
        }
        comb(0,n,p,k,v,ve);
        return ve;
    }
};
