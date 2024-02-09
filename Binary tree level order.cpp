class Solution {
public:
    void Fun(TreeNode* root, vector<vector<int>> &vec, int i)
    {
        if(root==NULL) return;
        if(i>=vec.size()) vec.push_back({root->val});
        else vec[i].push_back(root->val);
        Fun(root->left, vec, i+1);
        Fun(root->right, vec, i+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vec;
        Fun(root, vec, 0);
        reverse(vec.begin(), vec.end());
        return vec;
    }
};
