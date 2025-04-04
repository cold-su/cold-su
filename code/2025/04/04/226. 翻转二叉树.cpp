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
	TreeNode* invertTree(TreeNode* r) {
		dfs(r);
		return r;
	}
	void dfs(TreeNode*& r) {
		if (not r) {
			return;
		}
		std::swap(r->left, r->right);
		dfs(r->left);
		dfs(r->right);
	}
};