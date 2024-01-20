    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                //matrix[j][i]=matrix[i][j];
                // matrix[i][j]=matrix[j][i];
                swap(matrix[i][j],matrix[j][i]);
                
            }
            
        }
    }
