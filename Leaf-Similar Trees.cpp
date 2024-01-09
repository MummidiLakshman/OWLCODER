class Solution {
public:
    void pre(TreeNode* root,vector<int> &v)
    {
        if(root==NULL) return ;
        if(root->left==NULL and root->right==NULL)
        {
            v.push_back(root->val);
        }
        pre(root->left,v);
        pre(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        pre(root1,v1);
        vector<int> v2;
        pre(root2,v2);
        if(v1==v2) return true;
        else return false;       
    }
};
