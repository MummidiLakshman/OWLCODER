//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int min=INT_MAX,s=0,d=0;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    //s=i+1;
                    c+=1;
                    d=1;
                }
            }
            if(min>c)
            {
                min=c;
                s=i+1;
               // cout << min << " ";
            }
        }
        if(d==0) return 1;
        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends