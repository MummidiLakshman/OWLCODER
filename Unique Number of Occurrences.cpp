class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        map<int,int>hp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            hp[it.second]++;
        }
        for(auto it:hp)
        {
            if(it.second>1)
            {
                return false;
            }
        }
        return true;
    }
};
