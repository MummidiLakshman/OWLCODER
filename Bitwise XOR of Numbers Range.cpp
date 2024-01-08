#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,ans=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        ans=ans^i;
    }
    k= k | ans;
    cout << k;
}
