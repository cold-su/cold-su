class Solution {
public:
	int maxProduct(TreeNode* root) {
		dfs(root);
		u64 ans = 0;
		for (auto x : sum) {
			ans = std::max(ans, x * (sum.back() - x));
		}
		return ans % mod;
	}
private:
	const int mod = 1e9 + 7;
	using u64 = unsigned long long;
	std::vector<u64> sum;
	u64 dfs(TreeNode* r) {
		if (!r) {
			return 0;
		}
		auto res = dfs(r->left) + dfs(r->right) + r->val;
		sum.push_back(res);
		return res;
	}
};