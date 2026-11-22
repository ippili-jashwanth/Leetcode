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
    void order(TreeNode* root , vector<string>& s,string str = "")
    {
        if(root==NULL)return ;
        if(str.size()==0)
        {
           str+=(to_string(root->val)); 
        }
        else
        {
            str+="->";
            str+=(to_string(root->val));
        }
        if(root->left==NULL && root->right == NULL)
        {
          s.push_back(str);
          str = "";
        }
        order(root->left , s,str);
        order(root->right, s ,str);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> s ;
        string str;
        order(root,s,str);
        return s;
    }
};