class Solution {
public:
    void trav(TreeNode* root, int low, int high, int &sum)
    {
        if(root==NULL)
        {
            return ;
        }
        int data=root->val;
        if(data>=low && data<=high)
        {
            sum+=data;
        }
        trav(root->left, low,high,sum);
        trav(root->right, low,high,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        trav(root,low,high,sum);
        return sum;
    }
};
