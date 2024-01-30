class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        int m=0,m2=0;
        string s="";
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>m)
            {
                m=it.second;
            }
        }
        for(auto it:mp)
        {
            if(it.second>m2 and m>it.second)
            {
                m2=it.second;
                s=it.first;
            }
        }
        return s;
    }
};
