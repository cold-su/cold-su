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
	int calculateDepth(TreeNode* root) {
		dfs(root, 1);
		return ans;
	}
	int ans = 0;
	void dfs(TreeNode* r, int i) {
		if (!r) {
			return;
		}
		ans = std::max(ans, i);
		dfs(r->left, i + 1);
		dfs(r->right, i + 1);
	}
};