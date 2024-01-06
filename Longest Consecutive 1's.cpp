    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int c=0,m=0;
        for(int i=0;i<31;i++)
        {
            int res=N&1;
            if(res==0) 
                c=0;
            else 
            {
                c=c+1;
                if(c>m)
                {
                    m=c;
                }
            }
            N=N>>1;
        }
        return m;
    }
