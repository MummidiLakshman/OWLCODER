class Solution {
public:
    int ans=0;
    //int s=0;
    void path(TreeNode* root,int t,int s)
    {
        if(root==NULL) return;
        s+=root->val;
        if(root->left==NULL and root->right==NULL and s==t) ans=1;
        path(root->left,t,s);
        path(root->right,t,s);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int s=0;
        path(root,targetSum,s);
        if(ans) return true;
        else return false;
    }
};
