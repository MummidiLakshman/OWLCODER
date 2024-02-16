 public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>v;
        int left=0,right=c-1,top=0,bottom=r-1;
        while(left<=right and top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                v.push_back(matrix[top][i]);
            }
            top+=1;
            for(int j=top;j<=bottom;j++)
            {
                v.push_back(matrix[j][right]);
            }
            right-=1;
            if(top<=bottom)
            {
                
                for(int k=right;k>=left;k--)
                {
                    v.push_back(matrix[bottom][k]);
                }
                bottom-=1;
            }
           // bottom-=1;
            if(left<=right)
            {
                for(int m=bottom;m>=top;m--)
                {
                    v.push_back(matrix[m][left]);
                }
                left+=1;
            }
        }
        return v;
    }
