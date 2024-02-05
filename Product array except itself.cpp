class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int d=1,s=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                d*=nums[i];
            }
            else
            {
                s+=1;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(s<2)
            {
                if(nums[i]==0)
                {
                    v.push_back(d);
                }
                else if(s==1)
                {
                    v.push_back(0);
                }
                else
                {
                    v.push_back(d/nums[i]);
                }
            }
            else
            {
                v.push_back(0);
            }
        }
        return v;
    }
};
