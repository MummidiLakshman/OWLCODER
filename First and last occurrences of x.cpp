    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int c=0,d=0;
        vector<int>v;
        int i=0,j=n-1;
        while(i<=j and (c==0 or d==0))
        {
            if(arr[i]==x and c==0)
            {
                // v.push_back(i);
                v.insert(v.begin(), i);
                c=1;
            }
            else if(c==0)
            {
                i++;
            }
            if(arr[j]==x and d==0)
            {
                v.push_back(j);
                d=1;
            }
            else if(d==0)
            {
                j--;
            }

        }
        // sort(v.begin(),v.end());
        if(!v.size()) 
        {
            // v.push_back(-1);
            // v.push_back(-1);
            v={-1,-1};
        }
        return v;
    }
