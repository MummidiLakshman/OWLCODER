#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n=1e6+1;
vector<ll> primes(n);
void sieve(){
    for(int i=0;i<=n;i++){
        primes[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(primes[i]==i){
            for(int j=2*i;j<=n;j+=i) primes[j]=i;
        }
    }
}
int main(){
    sieve();
    //Text();
    int t;
    cin>>t;
    while(t--){
        map<int,int>mpp;
        ll ans=1;
        int m,t;
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>t;
            while(t!=1){
                mpp[primes[t]]++;
                t=t/primes[t];
            }
        }
        for(auto it:mpp){
            ans*=(it.second+1);
        }
        cout<<ans<<"\n";
}
}
    
