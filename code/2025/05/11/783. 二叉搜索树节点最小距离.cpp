class Solution {
public:
	int
	getMinimumDifference(TreeNode* r)
	{
		dfs(r);
		int ans = INT_MAX;
		for (int i = 0, n = a.size(); i + 1 < n; i++) {
			ans = std::min(ans, abs(a[i] - a[i + 1]));
		}
		return ans;
	}

	int
	minDiffInBST(TreeNode* r)
	{
		return getMinimumDifference(r);
	}
private:
	std::vector<int> a;

	void
	dfs(TreeNode* r)
	{
		if (!r) {
			return;
		}
		dfs(r->left);
		a.emplace_back(r->val);
		dfs(r->right);
	}
};