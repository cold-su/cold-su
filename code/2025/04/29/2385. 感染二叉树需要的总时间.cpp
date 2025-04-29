class Solution {
public:
	int amountOfTime(TreeNode* r, int start) {
		int ans = 0;
		auto dfs = [&](this auto& dfs, TreeNode* r) -> std::pair<int, bool> {
			if (!r) {
				return {0, false};
			}
			if (r->val == start) {
				ans = std::max(ans, _dfs(r) - 1);
				return {1, true};
			}
			auto [L, a] = dfs(r->left);
			auto [R, b] = dfs(r->right);
			if (a || b) {
				ans = std::max(ans, L + R);
				return {(a ? L : R) + 1, true};
			}
			return {std::max(L, R) + 1, false};
		};
		dfs(r);
		return ans;
	}
	int _dfs(TreeNode* r) {
		if (!r) {
			return 0;
		}
		return std::max(_dfs(r->left), _dfs(r->right)) + 1;
	}
};