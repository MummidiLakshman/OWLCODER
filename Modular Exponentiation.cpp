	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    int ans=1;
		    while(n)
		    {
		        if(n&1==1)
		        {
		            n=n-1;
		            ans=(ans%M * x%M);
		            ans=ans%M;
		        }
		        else
		        {
		            n=n/2;
		            x=(x%M)*(x%M);
		            x=x%M;
		        }
		    }
		    return ans%M;
		}
