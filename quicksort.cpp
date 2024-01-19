    void quickSort(int arr[], int low, int high)
    {
        // code here
        int p;
        if(low<high)
        {
            p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pi=high;
       int i=low;
       for(int j=low;j<=high;j++)
       {
           if(arr[j]<arr[pi])
           {
               swap(arr[j ],arr[i]);
               i++;
           }
       }
       swap(arr[i],arr[pi]);
       return i;
    }
