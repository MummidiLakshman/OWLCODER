//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    int a=2,b=3;
	    long long c=0;
	    int mod=1e9+7;
	    if(N==1) return a*a;
	    else if(N==2) return b*b;
	    N-=2;
	    while(N--)
	    {
	        c=a+b;
	        c=c%mod;
	        a=b;
	        b=c;
	    }
	   return (1LL*c*c)%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends