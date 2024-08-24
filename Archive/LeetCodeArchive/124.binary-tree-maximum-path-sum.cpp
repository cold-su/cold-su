/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
   public:
    int ans = INT_MIN;
    int maxPathSum(TreeNode* root) {
        pathSum(root);
        return ans;
    }
    int pathSum(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = max(pathSum(root->left), 0);
        int right = max(pathSum(root->right), 0);
        ans = max(ans, left + right + root->val);
        return root->val + max(left, right);
    }
};
// @lc code=end
