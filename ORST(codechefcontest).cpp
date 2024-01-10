#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a,b,p,o;
        cin >> a >> b;
        vector<int>arr;
        vector<int>brr;
        for(int j=0;j<a;j++)
        {
            cin >> p;
            arr.push_back(p);
        }
        for(int k=0;k<b;k++)
        {
            cin >> o;
            brr.push_back(o);
        }
        sort(brr.begin(),brr.end());
        int s=brr[b-1];
        int l=a-s;
        sort(arr.begin()+l,arr.end());
        for(int i=0;i<a;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
