class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //sort(begin(strs),end(strs));
        vector<vector<string>> v;
        vector<string>k;
        unordered_map<string,int>mp;
        string p[strs.size()];
        int j=0;
        for(int i=0;i<strs.size();i++)
        {
            p[j]=strs[i];
            j+=1;
        }
        for(int i=0;i<strs.size();i++)
        {
            sort(strs[i].begin(),strs[i].end());
            mp[{strs[i]}]++;
        }
        for(auto it:mp)
        {
            for(int i=0;i<strs.size();i++)
            {
               // sort(strs[i].begin(),strs[i].end());
                if(it.first==strs[i])
                {
                    k.push_back(p[i]);
                }
            }
            v.push_back(k);
            k.clear();
        }
        return v;
    }
};
