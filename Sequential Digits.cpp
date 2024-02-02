class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v;
       int i=1;
       int s=1,k=0;
       while(i<9)
       {
           s=i;
           while(s<=high and s%10)
           {
            if(s>=low and s<=high)
            {
                v.push_back(s);
            }
            k=s%10;
            s=(s*10)+(k+1);
           }
           i++;
       } 
       sort(v.begin(), v.end());
       return v;
    }
};
