class Solution {
public:
    void comb(int i,vector<int>&c,int n,int t,vector<int>&k,vector<vector<int>>&v)
    {
        if(i==n or t<0)
        {
           return; 
        }
        if(t==0) 
        {
            v.push_back(k);
            return;
        }
        k.push_back(c[i]);
        comb(i,c,n,t-c[i],k,v);
        k.pop_back();
        comb(i+1,c,n,t,k,v);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>v;
        vector<int>k;
        comb(0,candidates,n,target,k,v);
        return v;
    }
};
