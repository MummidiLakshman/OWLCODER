class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int j=0;
        string k="";
        string p="";
        vector<string>v;
        for(int i=n-1;i>=0;i--)
        {  
                      
            if(s[i]==' ' or i==0)
            {
                if(i==0 and s[i]!=' ') k+=s[i];
                if(k.size()!=0) 
                {
                    reverse(k.begin(),k.end());
                    v.push_back(k);
                }
                
                k="";
            }
            else k+=s[i];
               
        }
        // if(s)
        // v.push_back(s[0]);
        for(int i=0;i<v.size();i++)
        {
            p+=v[i];
            if(i!=v.size()-1) p+=" ";
        }
        return p;
    }
};
