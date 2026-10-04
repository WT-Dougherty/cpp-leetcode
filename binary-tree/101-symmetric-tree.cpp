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
    bool isSymmetric(TreeNode* root) {
        return dfs(root->left, root->right);
    }
private:
    bool dfs(TreeNode* cl, TreeNode* cr) {
        // base cases: either one or both current nodes are null
        if (!cl && !cr) {
            return true;
        } else if (!cl || !cr) {
            return false;
        } else if (cl->val != cr->val) {
            return false;
        } else {
            return dfs(cl->left, cr->right) && dfs(cl->right, cr->left);
        }
    }
};
