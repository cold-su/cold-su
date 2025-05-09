class Solution {
public:
	int 
	maxLevelSum(TreeNode* r) {
		dfs(r);
		auto [ans, max] = std::pair {0, INT_MIN};
		for (int i = 0, n = v.size(); i < n; i++) {
			if (v[i] > max) {
				max = v[i];
				ans = i;
			}
		}
		return ans + 1;
	}
private:
	std::vector<int> v;

	void
	dfs(TreeNode* r, int d = 0) {
		if (!r) {
			return;
		}
		if (d >= v.size()) {
			v.resize(d + 1);
		}
		v[d++] += r->val;
		dfs(r->left, d);
		dfs(r->right, d);
	}
};