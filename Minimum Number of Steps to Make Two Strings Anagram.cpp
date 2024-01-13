class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> tp;
        for (int i = 0; i < s.size(); i++) {
             mp[s[i]]++;
             tp[t[i]]++;
            }
       /* for(auto it:mp)
        {
            cout << it.first << " " << it.second << " ";
        }
        return 0;*/
        int cnt=0;
        for(auto it: tp){
            if(mp.find(it.first)!=mp.end()){
                //cout << it.first << " " << it.second << endl;
                int val = mp.at(it.first);
                tp[it.first] = it.second - val;
            }
        }
        for(auto it: tp){
           // cout << it.first << " "<< it.second<<endl;
            if(it.second > 0){
                
                cnt+= it.second;
            }
        }

        return cnt;
    }
};
