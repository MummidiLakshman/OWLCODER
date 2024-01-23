class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>k;
        vector<int>h;
        int p=pow(2,n);
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    h.push_back(nums[j]);
                }
            }
            k.push_back(h);
            h.clear();
        }
        /*for(int i=0;i<h.size();i++)
        {
            k.push_back(h[i]);
        }*/
        return k;
    }
};
