class Solution {
public:
    bool an=true;
    void st(TreeNode*root, TreeNode*root2)
    {
        if((root==NULL and root2!=NULL) or (root!=NULL and root2==NULL)) an=false;
        if(root==NULL or root2==NULL) return;
        if(root->val != root2->val) an=false;
        st(root->left, root2->left);
        st(root->right, root2->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        an=true;
        st(p,q);
        return an;
    }
};
