  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int s=0;
        map<int,int> mp;
        for(int i=0;i<N;i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
               s=it.first;
            }
        }
        return s;
    }
