class Solution
{
    public:
    void bt(Node*root,int s,vector<int>v,vector<vector<int>>&p,int k)
    {
        if(root==NULL)
        {
            return;
        }
        v.push_back(root->key);
        k+=root->key;
        if(k==s)
        {
            p.push_back(v);
        }
        bt(root->left,s,v,p,k);
        bt(root->right,s,v,p,k);
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<vector<int>>p;
        vector<int>v;
        int k=0;
        bt(root,sum,v,p,k);
        return p;
    }
};
