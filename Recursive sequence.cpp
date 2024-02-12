    long long sequence(int n){
        // code here
        long long s=(n*(n+1)/2);
        long long g=0;
        long mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            long long c=0,p=1;
            while(c!=(n-i))
            {
                p*=(s);
                p=p%mo
                s-=1;
                c+=1;
                
            }
            g+=(p%mod);
            //cout << p << " ";
            //cout << g << " ";
        }
        return g%mod;
    }
