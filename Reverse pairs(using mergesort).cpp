class Solution {
public:
    int c=0;
    void merge(vector<int>&arr,int l,int m,int h)
    {        
        int i=l;
        int j=m+1;
        int temp[h+1];
        int k=l;
        while(i<=m && j<=h)
        {
         if(arr[i]>((long long)2*(arr[j])))
            {
                c+=(m-i+1);
                j++;
            }
            else
            {
                i++;
            }
        }
        int p=l,x=m+1;
        while(p<=m && x<=h)
        {
            if(arr[p]<arr[x])
            {
                temp[k++]=arr[p++];
            }
            else
            {
                temp[k++]=arr[x++];
            }
        }
        while(p<=m)
        {
            temp[k++]=arr[p++];
        }
        while(x<=h)
        {
            temp[k++]=arr[x++];
        }
        for(int i=l;i<=h;i++) arr[i]=temp[i];
    } 
    void mergesort(vector<int> &arr,int l,int h)
    {
        //l=0,h=n-1;
        
        if(l>=h)
            return ;
        int m=l+(h-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,h);
        merge(arr,l,m,h);
        //return p;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return c;
    }
};
