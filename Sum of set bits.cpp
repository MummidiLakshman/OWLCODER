#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,sum1=0;
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            for(int j=0;j<32;j++)
            {
                if((i&(1<<j))>0)
                {
                    sum1+=1;
                }
            }
        }
        cout<<sum1<<endl;
    }
}
