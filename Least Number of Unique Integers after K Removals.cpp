class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        vector<int>v;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int i=0,j=0;
        if(v[0]>k) return v.size();
        while(k>0)
        {
            int s=v[i]-k;
            k-=v[i];
            //j+=1;
            i+=1;
            if(s<=0)
            {
                c+=1;
            }
        }
        return v.size()-c;
    }
};
