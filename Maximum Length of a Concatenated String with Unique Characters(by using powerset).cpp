class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        int p=pow(2,n);
        int m=0;
        for(int i=0;i<p;i++)
        {
            string s="";
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    s+=arr[j];
                }
            }
            int ar[27]={0};
            int le=0, p=1;
            for(auto it: s)
            {
                if(ar[it-'a']==0) 
                {
                    ar[it-'a']++;
                    le++;
                }
                else
                {
                    p=0;
                    break;
                } 
            }
            if(p and s.size()==le and le>m)
            {
                m=le;
            }
        }
        return m;
    }
};
