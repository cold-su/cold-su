class Solution {
public:
	std::vector<std::vector<int>>
	levelOrder(Node* r) {
		dfs(r);
		return ans;
	}
private:
	std::vector<std::vector<int>> ans;

	void
	dfs(Node* r, int d = 0) {
		if (!r) {
			return;
		}
		if (d >= ans.size()) {
			ans.resize(d + 1);
		}
		ans[d].emplace_back(r->val);
		for (auto c : r->children) {
			dfs(c, d + 1);
		}
	}
};