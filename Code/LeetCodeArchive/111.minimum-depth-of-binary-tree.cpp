/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
    int minDepth(TreeNode* root) {
        return __depth(root);
    }
    int __depth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = __depth(root->left);
        int right = __depth(root->right);
        int middle = 1 + (min(left, right) ? min(left, right) : max(left, right));
        return middle;
    }
};
// @lc code=end