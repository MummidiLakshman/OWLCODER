class Solution {
public:
    void bubblesort(vector<int>& arr,vector<int>&v)
    {        
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=0;j<n-i-1;j++)
            {
                if(v[j]==v[j+1] and arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);                   
                }
            }
        }
    }
    bool canSortArray(vector<int>& nums) {
        vector<int>v;
        int k=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int s=__builtin_popcount(nums[i]);
            v.push_back(s);
        }
        bubblesort(nums,v);
        for(int i=0;i<k-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return false;
            }
        }
        return true;
    }
};
