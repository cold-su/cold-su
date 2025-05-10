class Solution {
public:
	bool
	isEvenOddTree(TreeNode* r)
	{
		dfs(r);
		return ans;
	}
private:
	bool ans = true;
	std::map<int, std::vector<int>> map;

	void
	dfs(TreeNode* r, int d = 0)
	{
		if (!r || !ans) {
			return;
		}
		auto& v = map[d];
		int p = (d % 2) != (r->val % 2);
		if (v.size()) {
			if (d & 1) {
				p &= v.back() > r->val;
			} else {
				p &= v.back() < r->val;
			}
		}
		v.emplace_back(r->val);
		ans &= p;
		dfs(r->left, d + 1);
		dfs(r->right, d + 1);
	}
};