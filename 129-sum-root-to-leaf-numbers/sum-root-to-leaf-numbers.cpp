/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root, int sum=0 ) {
        if(root==NULL)return 0;
        if(root->left ==NULL && root->right == NULL)
        {  
            sum+=root->val;
            return sum;
            
            
        }
        sum+=root->val;
      int k =  sumNumbers(root->left, sum*10);
       int j = sumNumbers(root->right,sum*10);
        return k+j;

    }
};