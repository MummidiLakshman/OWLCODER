        vector<int>v;
        vector<vector<int>>k;
        map<vector<int>, int> mp;
        //int n=arr.size();
        int p=pow(2,n);
        for(int i=0;i<p;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i&(1<<j))
                {
                    v.push_back(arr[j]);
                }
            }
            sort(v.begin(),v.end());
            // if(find(k.begin(),k.end(),v)==k.end())
            if(mp[v]==0)
            {
                k.push_back(v);
                mp[v]++;
            }
            v.clear();
            //cout << endl;
        }
        sort(k.begin(),k.end());
        return k;
