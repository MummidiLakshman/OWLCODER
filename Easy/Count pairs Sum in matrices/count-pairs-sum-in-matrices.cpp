//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    int c=0;
	    vector<int>k;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
                k.push_back(mat1[i][j]);
                v.push_back(mat2[i][j]);
	        }
	        //k+=1
	    }
	   // for(int i=0;i<n*n;i++)
	   // {
	   //     cout << k[i] << " ";
	   // }
	   // for(int i=0;i<n*n;i++)
	   // {
	   //     cout << v[i] << " ";
	   // }
	    int p=(n*n)-1;
	   // for(int i=0;i<p;i++)
	   // {
	   //     cout << v[i] << " ";
	   // }
	    int i=0,j=p;
	    while(i<=p and j>=0)
	    {
	        if(k[i]+v[j]==x)
	        {
	            i+=1;
	            j-=1;
	            c+=1;
	        }
	        else if(k[i]+v[j]>x)
	        {
	            j-=1;
	        }
	        else
	        {
	            i+=1;
	        }
	    }
	    return c;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends