class Solution {
public:
    void solve(TreeNode* root, int targetSum,
               vector<int>& curr,
               vector<vector<int>>& ans) {

        if (root == NULL)
            return;

        curr.push_back(root->val);

        // Check whether we reached a leaf
        if (root->left == NULL && root->right == NULL) {

            if (targetSum == root->val)
                ans.push_back(curr);

        }
        else {
            solve(root->left, targetSum - root->val, curr, ans);
            solve(root->right, targetSum - root->val, curr, ans);
        }

        curr.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(root, targetSum, curr, ans);

        return ans;
    }
};