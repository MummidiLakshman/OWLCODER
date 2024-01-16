    void rotateArr(int arr[], int d, int n){
        // code here
        vector<int>v;
        int p=d%n;
        for(int i=p;i<n;i++)
        {
            v.push_back(arr[i]);
        }
        for(int j=0;j<p;j++)
        {
            v.push_back(arr[j]);
        }
        for(int k=0;k<v.size();k++)
        {
            arr[k]=v[k];
           // cout << v[k] << " ";
        }
        
    }
