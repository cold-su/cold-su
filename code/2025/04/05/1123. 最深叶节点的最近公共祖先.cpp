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
	TreeNode* lcaDeepestLeaves(TreeNode* root) {
		return dfs(root).first;
	}
	std::pair<TreeNode*, int> dfs(TreeNode* r) {
		if (!r) {
			return {r, 0};
		}
		auto [L, i1] = dfs(r->left);
		auto [R, i2] = dfs(r->right);
		if (i1 == i2) {
			return {r, i1 + 1};
		}
		if (i1 < i2) {
			std::swap(L, R);
		}
		int x = std::max(i1, i2);
		if (L) {
			return {L, x + 1};
		}
		return {R, x + 1};
	}
};