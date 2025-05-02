class Solution {
public:
	TreeNode* expandBinaryTree(TreeNode* root) {
		return dfs(root);
	}
private:
	TreeNode* dfs(TreeNode* r) {
		if (!r) {
			return NULL;
		}
		auto L = dfs(r->left), R = dfs(r->right);
		if (L) {
			L = new TreeNode(-1, L, NULL);
		}
		if (R) {
			R = new TreeNode(-1, NULL, R);
		}
		return new TreeNode(r->val, L, R);
	}
};