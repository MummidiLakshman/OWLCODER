int a=1e4+1;
vector<int>prime(a,1);
class Solution
{
public:
    void seive()
    {
        prime[0]=0;
        prime[1]=0;
        for(int i=2;i*i<=a;i++)
        {
            if(prime[i]==1)
            {
                for(int j=2*i;j<=a;j+=i)
                {
                    prime[j]=0;
                }
            }
        }
    }
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int> v;
        seive();
        for(int i=2;i<=N;i++)
        {
            if(prime[i]==1)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};
