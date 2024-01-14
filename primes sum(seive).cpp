class Solution {
public:
    void seive(int *prime,int N)
    {
        prime[0]=1;
        prime[1]=1;
        for(int i=2;i*i<=N;i++)
        {
            if(prime[i]==0)
            {
                for(int j=2*i;j<=N;j+=i)
                {
                    prime[j]=1;
                }
            }
        }
    }
    string isSumOfTwo(int N){
        // code here
        int c=0;
        int prime[N+1]={0};
        seive(prime,N+1);
        vector<int>v;
        for(int i=2;i<=N;i++)
        {
            if(prime[i]==0)
            {
                v.push_back(i);
            }
        }
        int j=v.size()-1, i=0;
        while(i<=j)
        {
            if(v[i]+v[j]==N)
            {
                return "Yes";
            }
            else if(v[i]+v[j]>N)
            {
                j-=1;
            }
            else
            {
                i+=1;
            }
        }
        return "No";
    }
};
