    void pp(int a, vector<int> &v)
    {
        if(a<=0)
        {
            v.push_back(a);
            return;
        }
        v.push_back(a);
        pp(a-5,v);
        v.push_back(a);
        return;
    }
    vector<int> pattern(int N){
        // code here
        vector<int>v;
        pp(N,v);
        return v;
    }
