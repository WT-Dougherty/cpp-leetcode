#include <vector>

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        std::vector<int> pathSums = dfs(root);
        for (const int& pathSum : pathSums) {
            if (pathSum == targetSum) { return true; }
        }
        return false;
    }
private:
    std::vector<int> dfs(TreeNode* node) {
        std::vector<int> rv;
        if (!node) { return rv; }
        
        if (!node->left && !node->right) {
            rv.push_back(node->val);
        } else {
            std::vector<int> subVec = dfs(node->left);
            rv.insert(rv.end(), subVec.begin(), subVec.end());
            subVec = dfs(node->right);
            rv.insert(rv.end(), subVec.begin(), subVec.end());
            for (int i = 0; i < rv.size(); i++) {
                rv[i] += node->val;
            }
        }
        return rv;
    }
};
