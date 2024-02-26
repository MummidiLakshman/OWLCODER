//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>v;
		    int n=s.size();
		    int p=pow(2,n);
		    string k="";
		    for(int i=1;i<p;i++)
		    {
		        
		        for(int j=0;j<=n;j++)
		        {
		            if(i&(1<<j))
		            {
		                k+=s[j];
		            }
		        }
		        v.push_back(k);
		        k.clear();
		    }
		    sort(v.begin(),v.end());
		    return v;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends