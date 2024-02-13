  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        queue<pair<int,int>>q;
        int n=arr.size();
        vector<int>v(100001,0);
        int s=0,c=0,p=-1,t=0, k;
        q.push({start,c});
        while(!q.empty() and p==-1)
        {
            c=q.front().second;
            k=q.front().first;
            //cout << k << " ";
             if(v[k]==0)
             {
                 v[k]=1;
             }
                if(k==end)
                {
                    p=c;
                    break;
                }
                // t=q.front().first;
                for(int i=0;i<arr.size();i++)
                {
                        
                        //t=t%100000;
                        s=k*arr[i];
                        s=s%100000;
                        if(v[s]==0)
                        {
                            if(s==end) 
                            {
                                p=c+1;
                                break;
                            }
                            q.push({s,c+1});
                            v[s]=1;
                        }
                   
                   //cout << s <<"\n";
                }
             
            
            q.pop();
        }
        // for(int i=0;i<v.size();i++)
        // {
        //     cout << v[i] << " ";
        // }
        return p;
