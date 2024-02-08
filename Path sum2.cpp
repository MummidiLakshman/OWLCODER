class Solution {
public:
    int ans=0;
    //int s=0;
    void path(TreeNode* root,int t,int s,vector<int>k,vector<vector<int>>&v)
    {
        if(root==NULL) return;
        k.push_back(root->val);
        s+=root->val;
        if(root->left==NULL and root->right==NULL and s==t)
        {
           v.push_back(k);
           //k.clear(); 
        } 
        path(root->left,t,s,k,v);
        path(root->right,t,s,k,v);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int s=0;
        vector<int>k;
        vector<vector<int>>v;
        path(root,targetSum,s,k,v);
        return v;
    }
};
