class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>v;
        int l=0,r=m-1,t=0,b=n-1;
        for(int i=l;i<=r;i++)
        {
            v.push_back(matrix[0][i]);
        }
        t++;
        for(int j=t;j<=b;j++)
        {
            v.push_back(matrix[j][r]);
        }
        r--;
        if(t<=b)
        {
        for(int k=r;k>=l;k--)
        {
            v.push_back(matrix[b][k]);
        }
        }
        b--;
        if(l<=r)
        {
        for(int p=b;p>=t;p--)
        {
            v.push_back(matrix[p][l]);
        }
        }
        l++;
        return v;
    }
};
