class Solution {
public:
	vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
		dfs(root);
		std::vector<std::vector<int>> ans;
		int n = a.size();
		for (int q : queries) {
			int i = std::ranges::lower_bound(a, q) - a.begin();
			int max = i >= n ? -1 : a[i];
			int min = i < n and a[i] == q ? a[i] : i > 0 ? a[i - 1] : -1;
			ans.push_back({min, max});
		}
		return ans;
	}
private:
	std::vector<int> a;
	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		dfs(r->left);
		a.push_back(r->val);
		dfs(r->right);
	}
};