class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>v;
        vector<int>k;
        vector<vector<int>> p(2);
        map<int,int> hp;
        for(int i=0;i<matches.size();i++)
        {
            hp[matches[i][1]]++;
        }
        for(auto it:hp)
        {
            if(it.second==1)
            {
                v.push_back(it.first);
            }
        }
        map<int,int> mp;
        for(int i=0;i<matches.size();i++)
        {
            mp[matches[i][0]]++;
        }
        for(auto it:mp)
        {
            if(hp.find(it.first)==hp.end())
            {
                k.push_back(it.first);
            }            
        }
        for(int i=0;i<k.size();i++)
        {
            p[0].push_back(k[i]);
        }
        for(int i=0;i<v.size();i++)
        {
            p[1].push_back(v[i]);
        }
        return p;
    }
};
