  public:
    void seive(int *prime,int n)
    {
        prime[0]=1;
        prime[1]=1;
        for(int i=2;i*i<=n;i++)
        {
            if(prime[i]==0)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    prime[j]=1;
                }
            }
        }
    }
    int countPrimes(int L, int R) {
        // code here
        int prime[R+1]={0};
        // cout<<prime[0]<<" "<<prime[1];
        seive(prime,R);
        int c=0;
        for(int i=L;i<=R;i++)
        {
            if(prime[i]==0)
            {
                c+=1;
            }
            //cout<<" "<<prime[i-L]<<" ";
        }
        return c;
    }
