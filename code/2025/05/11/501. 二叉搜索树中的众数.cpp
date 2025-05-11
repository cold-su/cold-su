class Solution {
public:
	std::vector<int>
	findMode(TreeNode* r)
	{
		dfs(r);
		std::vector<int> ans;
		for (auto [k, v] : map) {
			if (v == max) {
				ans.emplace_back(k);
			}
		}
		return ans;
	}
private:
	std::map<int, int> map;
	int max = 0;

	void
	dfs(TreeNode* r)
	{
		if (!r) {
			return;
		}
		dfs(r->left);
		map[r->val]++;
		max = std::max(max, map[r->val]);
		dfs(r->right);
	}
};