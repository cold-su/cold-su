class Solution {
public:
	TreeNode* pruneTree(TreeNode* root) {
		return dfs(root).first;
	}

private:
	std::pair<TreeNode*, int> dfs(TreeNode* r) {
		// r->val == 1 == true
		// sum(left-tree) == 0: to be remove
		// same to sum(right-tree)
		// make pair and calculate it
		if (!r) {
			return {nullptr, 0};
		}
		auto [L, Lv] = dfs(r->left);
		auto [R, Rv] = dfs(r->right);
		int p = r->val + Lv + Rv;
		if (p == 0) {
			return {nullptr, 0};
		}
		return {new TreeNode(r->val, Lv ? L : nullptr, Rv ? R : nullptr), p};
	}
};