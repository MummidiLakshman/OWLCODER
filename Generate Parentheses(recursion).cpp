class Solution
{
    
    public:
    void parenthesis(int op,int cl,int n,string p,vector<string>&t)
    {
        if(op==n and cl==n)
        {
            t.push_back(p);
            return;
        }
        if(op<n)
        {
            parenthesis(op+1,cl,n,p+"(",t);
        }
        if(op>cl)
        {
            parenthesis(op,cl+1,n,p+")",t);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>t;
        string p="";
        parenthesis(0,0,n,p,t);
        return t;
    }
};
