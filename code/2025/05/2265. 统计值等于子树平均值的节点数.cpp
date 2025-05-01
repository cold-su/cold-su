class Solution {
public:
	int averageOfSubtree(TreeNode* root) {
		dfs(root);
		return ans;
	}
private:
	int ans = 0;

	std::pair<int, int> dfs(TreeNode* r) {
		if (!r) {
			return {0, 0};
		}
		auto [l_tot, l_sum] = dfs(r->left);
		auto [r_tot, r_sum] = dfs(r->right);
		int tot = l_tot + r_tot + r->val;
		int sum = l_sum + r_sum + 1;
		ans += r->val == tot / sum;
		return {tot, sum};
	}
};