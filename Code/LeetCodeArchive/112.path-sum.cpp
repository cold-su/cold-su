/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
   public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // int ans = INT_MIN;
        // if (!root) {
        //     return false;
        // }
    }
    int path(TreeNode* node) {
        if (!node) {
            return 0;
        }
        int left = path(node->left);
        int right = path(node->right);
        // ans = max(ans, max(left, right));
        return node->val + max(left, right);
    }
};
// @lc code=end
