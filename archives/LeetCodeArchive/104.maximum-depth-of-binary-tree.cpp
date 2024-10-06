/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    int ans = 0;
    int maxDepth(TreeNode* root) {
        __maxDepth(root, 0);
        return ans;
    }
    void __maxDepth(TreeNode* root, int counter) {
        if (root == nullptr)
            return;
        counter++;
        ans = max(ans, counter);
        __maxDepth(root->left, counter);
        __maxDepth(root->right, counter);
    }
};
// @lc code=end
