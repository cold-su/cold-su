class Solution {
public:
	int maxAncestorDiff(TreeNode* r) {
		if (!r) {
			return 0;
		}
		return std::max(dfs(r->left, r->val, r->val), dfs(r->right, r->val, r->val));
	}
	int dfs(TreeNode* r, int max, int min) {
		if (!r) {
			return 0;
		}
		int res = std::max(abs(r->val - max), abs(r->val - min));
		max = std::max(max, r->val);
		min = std::min(min, r->val);
		return std::max({dfs(r->left, max, min), dfs(r->right, max, min), res});
	}
};