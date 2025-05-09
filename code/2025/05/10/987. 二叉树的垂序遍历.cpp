class Solution {
public:
	std::vector<std::vector<int>>
	verticalTraversal(TreeNode* root) {
		// (row, col) means (y, x)
		dfs(root);
		std::vector<std::vector<int>> ans(map.size());
		int i = 0;
		for (auto& [_, v] : map) {
			for (std::ranges::sort(v); auto [__, x] : v) {
				ans[i].emplace_back(x);
			}
			i++;
		}
		return ans;
	}
private:
	std::map<int, std::vector<std::pair<int, int>>> map;

	void
	dfs(TreeNode* r, int idx = 0, int d = 0) {
		// (idx, d) -> (x, y)
		if (!r) {
			return;
		}
		map[idx].emplace_back(d, r->val);
		dfs(r->left, idx - 1, d + 1);
		dfs(r->right, idx + 1, d + 1);
	}
};