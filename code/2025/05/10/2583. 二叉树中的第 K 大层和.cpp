class Solution {
public:
	long long
	kthLargestLevelSum(TreeNode* r, int k)
	{
		dfs(r);
		auto i = v.end() - k;
		if (std::distance(v.begin(), i) < 0) {
			return -1;
		}
		std::ranges::nth_element(v, i);
		return *i;
	}
private:
	std::vector<uint64_t> v;

	void
	dfs(TreeNode* r, int d = 0)
	{
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