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
    void inorder(TreeNode* root, vector<int>& visit) {
        if(!root) return ;
        inorder(root->left, visit);
        visit.push_back(root->val);
        inorder(root->right, visit);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> visit;
        inorder(root, visit);
        return visit;
    }
};
